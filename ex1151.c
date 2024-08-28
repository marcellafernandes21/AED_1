#include <stdio.h>

int main(){
    int N;
    
    scanf("%d", &N);
    
    int fibonacci[46];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    for (int i = 2; i < N; i++){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    for (int i = 0; i < N; i++){
        if (i > 0){
            printf(" ");
        }
        printf("%d", fibonacci[i]);
    }
    printf("\n");
    return 0;
}