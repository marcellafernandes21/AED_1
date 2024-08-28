#include <stdio.h>
#include <math.h>

int main(){
    int A, B, C, D;
    int n = -1;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if (A < 1 || A > 1e9 || B < 1 || B > 1e9 || C < 1 || C > 1e9 || D < 1 || D > 1e9){
        printf("Entrada inválida.\n");
    } else {
        for (int i = 1; i * i <= C; i++){
            if (C % i == 0){
                if (i % A == 0 && i % B != 0 && D % i != 0){
                    n = i;
                    break;
                }
                int divisor = C / i;
                if (divisor % A == 0 && divisor % B != 0 && D % divisor != 0){
                    n = divisor;
                }
            }
        }
        printf("%d\n", n);
    }
    return 0;
}