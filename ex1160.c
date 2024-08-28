#include <stdio.h>
 
int main() {
    int T, PA, PB, anos;
    double G1, G2;
    
    scanf("%d", &T);
    
    while (T--){
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        
        anos = 0;
        while (PA <= PB && anos <= 100){
            PA += PA * (G1 / 100);
            PB += PB * (G2 / 100);
            anos++;
        }
        if (anos > 100){
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", anos);
        }
    }
    return 0;
}