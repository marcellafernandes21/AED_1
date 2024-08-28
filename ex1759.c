#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    if (N <= 0 || N > 1000000){
        printf("Entrada inválida! O valor N deve estar entre 1 e 10ˆ6.\n");
        return 1;
    }
    for (int i = 0; i < N; i++){
        printf("Ho");
        if (i < N - 1){
            printf(" ");
        }
    }
    printf("!\n");
    return 0;
}