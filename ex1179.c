#include <stdio.h>

int main(){
    int par[5],impar[5], x, contPar = 0, contImpar = 0;
    
    for (int i = 0; i < 15; i++){
        scanf("%d", &x);
        
        if ( x % 2 == 0){
            par[contPar++] = x;
            
            if (contPar == 5){
                for (int j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                contPar = 0;
            }
        } else {
            impar[contImpar++] = x;
            
            if (contImpar == 5){
                for (int j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                contImpar = 0;
            }
        }
    }
    for (int i = 0; i < contImpar; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (int i = 0; i < contPar; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}