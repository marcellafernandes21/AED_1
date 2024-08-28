#include <stdio.h>

int main(){
    int N, i;
    
    scanf("%d", &N);
    
    if (N <= 0){
        printf("Entrada inválida. O número deve ser positivo.\n");
        return 1;
    }
    
    printf("1\n");
    for (i = 2; i <= N / 2; i++){
        if (N % i == 0){
            printf("%d\n", i);
        }
    }
    printf("%d\n", N);
    return 0;
}