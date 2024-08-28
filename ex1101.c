#include <stdio.h>
 
int main() { 
    int M, N, soma, menor, maior;
    
    while(1){
        scanf("%d %d", &M, &N);
        
        if (M <= 0 || N <= 0){
            break;
        }
        menor = (M < N) ? M : N;
        maior = (M > N) ? M : N;
        
        soma = 0;
        
        for (int i = menor; i <= maior; i++){
            printf("%d ", i);
            soma += i;
        }
        printf("Sum=%d\n", soma);
    }
    return 0;
}