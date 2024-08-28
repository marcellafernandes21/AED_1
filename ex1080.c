#include <stdio.h>
 
int main() {
    int valor, maiorValor = -1, posicaoMaior = -1, i;
    
    for (i = 1; i <= 100; i++){
        scanf("%d", &valor);
        
        if (valor > maiorValor){
            maiorValor = valor;
            posicaoMaior = i;
        }
    }
    printf("%d\n%d\n", maiorValor, posicaoMaior);
    return 0;
}