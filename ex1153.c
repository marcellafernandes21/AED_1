#include <stdio.h>
 
int main() {
    int N, i, fatorial = 1;
    
    scanf("%d", &N);
    
    if ( N < 0 || N > 12){
        printf("Valor de N invalido (0 < N < 13)\n");
        return 1;
    }
    for (i = 1; i <= N; i++){
        fatorial *= i;
    }
    printf("%d\n", fatorial);
    return 0;
}