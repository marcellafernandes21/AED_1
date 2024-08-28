#include <stdio.h>

void troca(double *a, double *b){
    double temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    double A, B, C;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    if (A < B) troca (&A, &B);
    if (A < C) troca (&A, &C);
    if (B < C) troca (&B, &C);
    
    if (A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if(A * A == B * B + C *C){
            printf("TRIANGULO RETANGULO\n");
        } else if (A * A > B * B + C * C){
            printf("TRIANGULO OBTUSANGULO\n");
        } else {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C){
            printf("TRIANGULO EQUILATERO\n");
        } else if (A == B || A == C || B == C){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}