#include <stdio.h>

int main(){
    int X;
    
    while (scanf("%d", &X) == 1 && X != 0){
        for (int i = 1; i <= X; i++){
            printf("%d", i);
            if (i < X) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}