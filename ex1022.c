#include <stdio.h>
int mdc(int a, int b){
    if (b == 0) return a;
    return mdc(b, a % b);
}
int main() {
    int N, N1, D1, N2, D2;
    char op;
    
    scanf("%d", &N);
    
    while (N--){
        scanf("%d / %d %c %d / %d", &N1, &D1, &op, &N2, &D2);
        
        int num_result, den_result;
        switch (op){
            case '+':
                 num_result = N1 * D2 + N2 * D1;
                 den_result = D1 * D2;
                 break;
            case '-':
                 num_result = N1 * D2 - N2 * D1;
                 den_result = D1 * D2;
                 break;
            case '*':
                 num_result = N1 * N2;
                 den_result = D1 * D2;
                 break;
            case '/':
                 num_result = N1 * D2;
                 den_result = N2 * D1;
                 break;
        }
        int divisor = mdc(num_result, den_result);
        int simplificado_num = num_result / divisor;
        int simplificado_den = den_result / divisor;
        if (simplificado_den < 0){
            simplificado_num = - simplificado_num;
            simplificado_den = - simplificado_den;
        }
        printf("%d/%d = %d/%d\n", num_result, den_result, simplificado_num, simplificado_den);
    }
    return 0;
}