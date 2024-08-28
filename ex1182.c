#include <stdio.h>

int main(){
    int C;
    char T;
    double M[12][12], soma = 0.0;
    
    scanf("%d", &C);
    scanf(" %c", &T);
    
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
            if ( j == C){
                soma += M[i][j];
            }
        }
    }
    if( T == 'S'){
        printf("%.1lf\n", soma);
    } else if(T == 'M'){
        printf("%.1lf\n", soma / 12.0);
    }
    return 0;
}