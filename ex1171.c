#include <stdio.h>
 
int main() {
    int N, X, i;
    int frequencia[2001] = {0};
    
    scanf("%d", &N);
    
    for (i = 0; i < N; i++){
        scanf("%d", &X);
        frequencia[X]++;
    }
    for (i = 1; i <= 2000; i++){
        if (frequencia[i] > 0){
            printf("%d aparece %d vez(es)\n", i, frequencia[i]);
        }
    }
    return 0;
}