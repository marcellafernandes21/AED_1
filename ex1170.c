#include <stdio.h>
 
int main() {
    int N, dias;
    float C;
    
    scanf("%d", &N);
    
    if (N < 1 || N > 1000){
        printf("Erro: O número de casos de teste deve estar entre 1 e 1000.\n");
        return 1;
    }
    while (N--){
        scanf("%f", &C);
        
        if (C < 1 || C > 1000){
            printf("Erro: A quantidade de comida deve estar entre 1 e 1000.\n");
            continue;
        }
        dias = 0;
        while (C > 1){
            C /= 2;
            dias++;
        }
        printf("%d dias\n", dias);
    }
    return 0;
}