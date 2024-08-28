#include <stdio.h>

int main(){
    int N, X,Y, i, maior, menor, soma;
    
    scanf("%d", &N);
    for ( i = 0; i < N; i++){
        scanf("%d %d", &X, &Y);
        
        soma = 0;
        
        menor = (X < Y) ? X : Y;
        maior = (X > Y) ? X : Y;
        
        for(int num = menor + 1; num < maior; num++){
            if (num % 2 != 0){
                soma += num;
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}