#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int num;
    struct Node* prox;
} Node;

typedef struct Pilha {
    Node *head;
    int tamanho;
} Pilha;

Node* criarNode(int valor){
    Node *novoNo = (Node *)malloc(sizeof(Node));
    if (novoNo == NULL){
        printf("Erro: falha ao alocar memória para o novo nó.\n");
        exit(1);
    }
    novoNo->num = valor;
    novoNo->prox = NULL;
    return novoNo;
}

void inicializarPilha(Pilha *pilha){
    pilha->head = NULL;
    pilha->tamanho = 0;
}

void empilhar(Pilha *pilha, Node *novoNo){
    novoNo->prox = pilha->head;
    pilha->head = novoNo;
    pilha->tamanho++;
}

Node *desempilhar(Pilha *pilha){
    if (pilha->head != NULL){
        Node *temp = pilha->head;
        pilha->head = pilha->head->prox;
        pilha->tamanho--;
        return temp;
    }
    return NULL;
}

void liberarPilha(Pilha *pilha){
    while (pilha->head != NULL){
        desempilhar(pilha);
    }
}

void imprimirPilha(Pilha* pilha){
    Node* atual = pilha->head;
    printf("Pilha: ");
    while (atual != NULL){
        printf("%d ", atual->num);
        atual = atual->prox;
    }
    printf("\n");
}

void jogaFora(Pilha *p){
    Pilha inverte;
    inicializarPilha(&inverte);
    int tam = p->tamanho;
    int descartados[tam-1];
    
    for(int i = 0; i< tam -1; i++){
        Node *aux = desempilhar(p);
        descartados[i] = aux->num;
        
        aux = desempilhar(p);
        while(p->head != NULL){
            empilhar(&inverte, desempilhar(p));
        }
        
        empilhar(p, aux);
        while(inverte.head != NULL){
            empilhar(p, desempilhar(&inverte));
        }
    }
    
    printf("Discarded cards:");
    for(int i = 0; i< tam -1; i++){
        if(i == tam -2){
            printf(" %i\n", descartados[i]);
        } else {
            printf(" %i,", descartados[i]);
        }
    }
    printf("Remaining card: %i\n", p->head->num);
}
int main(){
    Pilha pilha;
    int n = -1;
    
    inicializarPilha(&pilha);
    
    while(scanf("%d", &n) == 1 && n != 0){
        for (int i = n; i > 0; i--){
            empilhar(&pilha, criarNode(i));
        }
        jogaFora(&pilha);
        liberarPilha(&pilha);
    }
    return 0;
}