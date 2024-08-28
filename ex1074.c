#include <stdio.h>
 
int main() {
    int N, X, i;
    
    scanf("%d", &N);
    
    if (N >= 10000){
        printf("Valor de N invalido (N < 10000)\n");
        return 1;
    }
    for (i = 0; i < N; i++){
        scanf("%d", &X);
        
        if (X == 0){
            printf("NULL\n");
        } else {
            if (X % 2 ==0) {
                printf("EVEN ");
             } else {
                printf("ODD ");
             }
             if (X > 0){
                 printf("POSITIVE\n");
             } else {
                 printf("NEGATIVE\n");
             }
        }
    }
    return 0;
}