#include <stdio.h>
 
int main() {
    float A, B, C;
    float media;
    
    scanf("%f\n %f\n %f\n", &A, &B, &C);
    
    media = (A * 2 + B * 3 + C * 5)/ 10;
    
    printf("MEDIA = %.1f\n", media);
    return 0;
}