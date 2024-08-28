#include <stdio.h>

int main(){
    int V, N[10];
    
    scanf("%d", &V);
    if (V > 50){
        printf("Valor inválido. V deve ser menor ou igual a 50!\n");
        return 1;
    }
    N[0] = V;
    for (int i = 1; i < 10; i++){
        N[i] = N[i - 1] * 2;
    }
    for (int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}