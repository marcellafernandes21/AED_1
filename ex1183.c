#include <stdio.h>

int main(){
    int elementos = 0;
    char O;
    double M[12][12], soma = 0.0;
    
    scanf("%c", &O);
    
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
            if (j > i){
                soma += M[i][j];
                elementos++;
            }
        }
    }
    if (O == 'S'){
        printf("%.1lf\n", soma);
    } else if (O == 'M'){
        printf("%.1lf\n", soma / elementos);
    }
    return 0;
}