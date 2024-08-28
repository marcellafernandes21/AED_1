#include <stdio.h>

int main(){
    int X, Y, inicio, fim;
    
    scanf("%d %d", &X, &Y);
    
    if (X < Y){
        inicio = X;
        fim = Y;
    } else {
        inicio = Y;
        fim = X;
    }
    for (int i = inicio + 1; i < fim; i++){
        if (i % 5 == 2 || i % 5 == 3){
            printf("%d\n", i);
        }
    }
    return 0;
}