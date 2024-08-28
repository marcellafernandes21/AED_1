#include <stdio.h>

int main(){
    int N, menorValor, posicaoMenor;
    
    scanf("%d", &N);
    
    if (N <= 1 || N >= 1000){
        printf("Tamanho de vetor inválido. N deve estar entre 2 e 999");
        return 1;
    }
    int X[N];
    scanf("%d", &X[0]);
    menorValor = X[0];
    posicaoMenor = 0;
    for (int i = 1; i < N; i++){
        scanf("%d", &X[i]);
        if (X[i] < menorValor){
            menorValor = X[i];
            posicaoMenor = i;
        }
    }
    printf("Menor valor: %d\n", menorValor);
    printf("Posicao: %d\n", posicaoMenor);
    
    return 0;
}