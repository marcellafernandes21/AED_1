#include <stdio.h>
 
int main() {
    char nome[50];
    double salario_fixo, total_vendas, comissao, total_receber;
    const double PERCENTUAL_COMISSAO = 0.15;
    
    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);
    
    comissao = total_vendas * PERCENTUAL_COMISSAO;
    total_receber = salario_fixo + comissao;
    
    printf("TOTAL = R$ %.2lf\n", total_receber);
    return 0;
}