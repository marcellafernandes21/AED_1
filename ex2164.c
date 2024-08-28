#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double phi = (1 + sqrt(5)) / 2;
    double resultado;
    
    scanf("%d", &n);
    resultado = (pow(phi, n) - pow(1 - phi, n)) / sqrt(5);
    printf("%.1lf\n", resultado);
    
    return 0;
}