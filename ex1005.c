#include <stdio.h>
 
int main() {
    double A, B, media;
    const double peso_A = 3.5;
    const double peso_B = 7.5;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    media = (A * peso_A + B * peso_B) / (peso_A + peso_B);
    printf("MEDIA = %.5lf\n", media);
    return 0;
}