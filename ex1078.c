#include <stdio.h>
 
int main() {
    int N, i;
    
    scanf("%d", &N);
    
    if (N <= 2 || N >= 1000){
        printf("Valor de N invalido (2 < N < 1000)\n");
        return 1;
    }
    for (i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, N, i * N);
    }
    return 0;
}