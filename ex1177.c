#include <stdio.h>

int main(){
    int T, N[1000];
    
    scanf("%d", &T);
    
    if (T < 2 || T > 50){
        printf("Valor inválido. O valor de T deve estar entre 2 e 50!");
        return 1;
    }
    for (int i = 0; i < 1000; i++){
        N[i] = i % T;
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}