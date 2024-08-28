#include <stdio.h>

int mdc(int a, int b){
    while (b != 0){
        int temp = b;
        b = a %b;
        a = temp;
    }
    return a;
}
int main() {
    int N, F1, F2;
    
    scanf("%d", &N);
    
    while (N--){
        scanf("%d %d", &F1, &F2);
        int resultado = mdc(F1, F2);
        printf("%d\n", resultado);
    }
    return 0;
}