#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int origem, destino, peso;
} aresta;

aresta grafo[250];
int pai[70];

int compara(const void *a, const void *b) {
    return ((aresta *)a)->peso - ((aresta *)b)->peso;
}
int encontrar_componente(int i) {
    return (i == pai[i]) ? i : (pai[i] = encontrar_componente(pai[i]));
}
int kruskal(int num_arestas) {
    int resultado = 0, origem, destino;
    for (int i = 0; i < num_arestas; ++i) {
        origem = encontrar_componente(grafo[i].origem);
        destino = encontrar_componente(grafo[i].destino);
        if (origem != destino) {
            pai[origem] = destino;
            resultado += grafo[i].peso;
        }
    }
    return resultado;
}
int main() {
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);

    for (int i = 0; i < colunas; ++i)
        scanf("%d %d %d", &grafo[i].origem, &grafo[i].destino, &grafo[i].peso);

    qsort(grafo, colunas, sizeof(aresta), compara);

    for (int i = 1; i <= linhas; ++i)
        pai[i] = i;

    printf("%d\n", kruskal(colunas));
    return 0;
}
