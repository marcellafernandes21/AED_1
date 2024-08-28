#include <stdio.h>
 
int main() {
    int n, quantia, totalCobaias = 0, totalCoelhos = 0, totalRatos = 0, totalSapos = 0;
    char tipo;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d %c", &quantia, &tipo);
        
        totalCobaias += quantia;
        switch (tipo){
            case 'C':
                totalCoelhos += quantia;
                break;
            case 'R':
                totalRatos += quantia;
                break;
            case 'S':
                totalSapos += quantia;
                break;
        }
    }
    printf("Total: %d cobaias\n", totalCobaias);
    printf("Total de coelhos: %d\n", totalCoelhos);
    printf("Total de ratos: %d\n", totalRatos);
    printf("Total de sapos: %d\n", totalSapos);
    printf("Percentual de coelhos: %.2lf %%\n", (double)totalCoelhos / totalCobaias * 100);
    printf("Percentual de ratos: %.2lf %%\n", (double)totalRatos / totalCobaias * 100);
    printf("Percentual de sapos: %.2lf %%\n", (double)totalSapos / totalCobaias * 100);
    return 0;
}