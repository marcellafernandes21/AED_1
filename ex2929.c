#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERDADEIRO 1
#define FALSO 0

typedef struct Nodo {
    long long dado;
    struct Nodo *proximo;
} Nodo;

typedef struct EstruturaPilha {
    Nodo *topo;
} EstruturaPilha;

void removerTopo(EstruturaPilha *pilha);
void inicializarPilha(EstruturaPilha *pilha);
long long buscarMenorValor(EstruturaPilha *pilha);
void adicionarNoTopo(EstruturaPilha *pilha, long long dado);

int main() {
    EstruturaPilha pilha;
    char comando[10];
    int totalComandos;
    long long dado, valorTemporario;

    scanf("%u", &totalComandos);

    inicializarPilha(&pilha);

    while (totalComandos--) {
        scanf("%s", comando);

        if (strcmp(comando, "PUSH") == 0) {
            scanf("%lld", &dado);
            adicionarNoTopo(&pilha, dado);
        } else if (strcmp(comando, "POP") == 0) {
            removerTopo(&pilha);
        } else {
            valorTemporario = buscarMenorValor(&pilha);
            if (valorTemporario == -1)
                printf("EMPTY\n");
            else
                printf("%lld\n", valorTemporario);
        }
    }

    return 0;
}

void inicializarPilha(EstruturaPilha *pilha) {
    pilha->topo = NULL;
}

void adicionarNoTopo(EstruturaPilha *pilha, long long dado) {
    Nodo *novoNodo = (Nodo *) malloc(sizeof(Nodo));

    if (!novoNodo)
        exit(1);

    novoNodo->dado = dado;
    novoNodo->proximo = pilha->topo;
    pilha->topo = novoNodo;
}

void removerTopo(EstruturaPilha *pilha) {
    Nodo *nodoTemporario = pilha->topo;

    if (nodoTemporario) {
        pilha->topo = nodoTemporario->proximo;
        free(nodoTemporario);
    } else {
        printf("EMPTY\n");
    }
}

long long buscarMenorValor(EstruturaPilha *pilha) {
    Nodo *nodoTemporario = pilha->topo;
    if (!nodoTemporario)
        return -1;

    long long menorValor = nodoTemporario->dado;

    while (nodoTemporario) {
        if (nodoTemporario->dado < menorValor)
            menorValor = nodoTemporario->dado;

        nodoTemporario = nodoTemporario->proximo;
    }

    return menorValor;
}
