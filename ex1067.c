#include <stdio.h>
 
int main() {
    int X;
    
    scanf("%d", &X);
    
    if (X <= 1 || X >= 1000){
        printf("Valor invalido. X deve estar entre 1 e 1000.\n");
        return 1;
    } 
    for (int i = 1; i <= X; i += 2){
        printf("%d\n", i);
    }
    return 0;
}