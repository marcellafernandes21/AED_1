#include <stdio.h>

int fibonacci(int n, int *calls){
    (*calls)++;
    if (n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        return fibonacci(n - 1, calls) + fibonacci(n - 2, calls);
    }
}
int main(){
    int N, X, i, num_calls, resultado;
    
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d", &X);
        num_calls = -1;
        resultado = fibonacci(X, &num_calls);
    
        printf("fib(%d) = %d calls = %d\n", X, num_calls, resultado);
    }
    return 0;
}