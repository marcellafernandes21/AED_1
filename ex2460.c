#include <stdio.h>
#define MAX_PESSOAS 100001
int main() {
    int N,M;
    int fila[MAX_PESSOAS];
    int deixaramFila;
    int aindaNaFila[MAX_PESSOAS] = {0};
    int i;
    
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d", &fila[i]);
        aindaNaFila[fila[i]] = 1;
    }
    
    scanf("%d", &M);
    for (i = 0; i < M; i++){
        scanf("%d", &deixaramFila);
        aindaNaFila[deixaramFila] = 0;
    }
    int primeiro = 1;
    for (i = 0; i < N; i++){
        if (aindaNaFila[fila[i]]){
            if (!primeiro){
               printf(" ");
            }
            printf("%d", fila[i]);
            primeiro = 0;
        }
    }
    printf("\n");
    return 0;
}