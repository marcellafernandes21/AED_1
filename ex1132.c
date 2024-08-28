#include <stdio.h>

int main(){
    int X, Y, menor, maior, soma = 0;\
    
    scanf("%d %d", &X, &Y);
    if (X < Y){
        menor = X;
        maior = Y;
    } else {
        menor = Y;
        maior = X;
    }
    
    for (int i = menor; i <= maior; i++){
        if (i % 13 != 0){
            soma +=i;
        }
    }
    printf("%d\n", soma);
    return 0;
}