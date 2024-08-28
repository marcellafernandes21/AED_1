#include <stdio.h>
 
int main() {
    int codigo_peca1, numero_pecas1, codigo_peca2, numero_pecas2;
    double valor_unitario1, valor_unitario2, valor_total;
    
    scanf("%d %d %lf", &codigo_peca1, &numero_pecas1, &valor_unitario1);
    scanf("%d %d %lf", &codigo_peca2, &numero_pecas2, &valor_unitario2);
    
    valor_total = (numero_pecas1 * valor_unitario1) + (numero_pecas2 * valor_unitario2);
    printf("VALOR A PAGAR: R$ %.2lf\n", valor_total);
    return 0;
}