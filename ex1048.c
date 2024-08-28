#include <stdio.h>
 
int main() {
    double salario, novoSalario, reajuste, percentual;
    
    scanf("%lf", &salario);
    
    if (salario >= 0 && salario <= 400.00){
        percentual = 15.0;
    } else if (salario <= 800.00){
        percentual = 12.0;
    } else if (salario <= 1200.00){
        percentual = 10.0;
    } else if (salario <= 2000.00){
        percentual = 7.0;
    } else {
        percentual = 4.0;
    }
    
    reajuste = salario * percentual / 100;
    novoSalario = salario + reajuste;
    
    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n", percentual);
    return 0;
}