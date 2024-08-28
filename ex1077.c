#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pilha {
    char dado;
    struct Pilha* proximo;
};

struct Pilha* criarNo(char dado){
    struct Pilha* novoNo = (struct Pilha*)malloc(sizeof(struct Pilha));
    novoNo->dado = dado;
    novoNo->proximo = NULL;
    return novoNo;
}

int estaVazia(struct Pilha* pilha){
    return (pilha == NULL);
}

void empilhar(struct Pilha** pilha, char dado){
    struct Pilha* novoNo = criarNo(dado);
    novoNo->proximo = *pilha;
    *pilha = novoNo;
}

char desempilhar(struct Pilha** pilha){
    if (estaVazia(*pilha)){
        return '\0';
    }
    struct Pilha* temp = *pilha;
    *pilha = (*pilha)->proximo;
    char desempilhado = temp->dado;
    free(temp);
    return desempilhado;
}

int obterPrecedencia(char op){
    switch (op){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

int ehAlfanumerico(char c){
    return (c >= '0' && c <= '9')|| (c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z');
}

void infixaParaPosfixa(char* infixa, char* posfixa){
    struct Pilha* pilha = NULL;
    int i, j = 0;
    
    for (i = 0; infixa[i]; i++){
        char c = infixa[i];
        if (ehAlfanumerico(c)){
            posfixa[j++] = c;
        } else if (c == '('){
            empilhar(&pilha, c);
        } else if (c == ')'){
            while (!estaVazia(pilha) && pilha->dado != '('){
                posfixa[j++] = desempilhar(&pilha);
            }
            desempilhar(&pilha);
        } else {
            while (!estaVazia(pilha) && obterPrecedencia(c) <= obterPrecedencia(pilha->dado)){
                posfixa[j++] = desempilhar(&pilha);
            }
            empilhar(&pilha, c);
        }
    }
    while (!estaVazia(pilha)){
        posfixa[j++] = desempilhar(&pilha);
    }    
    posfixa[j] = '\0';
}

int main(){
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        char expressao[301];
        scanf("%s", expressao);
        
        char posfixa[301];
        infixaParaPosfixa(expressao, posfixa);
        printf("%s\n", posfixa);
    }
    return 0;
}