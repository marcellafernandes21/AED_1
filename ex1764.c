#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_MAX 40050
#define TAMANHO_MAX_P 40000

typedef struct {
    int origem, destino, peso;
} aresta;

aresta grafo[TAMANHO_MAX];
int pai[TAMANHO_MAX_P];

int compara(const void *a, const void *b) {
    return ((aresta *)a)->peso - ((aresta *)b)->peso;
}

int encontrar_componente(int i) {
    return (i == pai[i]) ? i : (pai[i] = encontrar_componente(pai[i]));
}

int kruskal(int num_arestas) {
    int resultado = 0, origem, destino;
    for (int i = 0; i < num_arestas; ++i) {
        origem = encontrar_componente(grafo[i].destino);
        destino = encontrar_componente(grafo[i].origem);
        if (origem != destino) {
            pai[origem] = destino;
            resultado += grafo[i].peso;
        }
    }
    return resultado;
}

int main() {
    int m, n;
    while (scanf("%d %d", &m, &n), m && n) {
        memset(pai, 0, sizeof(pai));
        for (int i = 0; i < n; ++i)
            scanf("%d %d %d", &grafo[i].destino, &grafo[i].origem, &grafo[i].peso);
        qsort(grafo, n, sizeof(aresta), compara);
        for (int i = 1; i <= m; ++i)
            pai[i] = i;
        printf("%d\n", kruskal(n));
    }
    return 0;
}
