#include <stdio.h>
#include <string.h>

#define MAX_LETRAS 1001

int minCaracteresParaAdicionar(char str[]){
    int frequencia[26] = {0};
    int contadorImpar = 0;
    int tamanho = 0;
    
    while (str[tamanho] != '\0'){
        tamanho++;
    }
    
    for (int i = 0; i < tamanho; i++){
        frequencia[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++){
        if (frequencia[i] % 2 != 0){
            contadorImpar++;
        }
    }
    if (contadorImpar > 0){
        return contadorImpar -1;
    } else {
       return 0;
    }
}
 
int main() {
    char str[MAX_LETRAS];
    while(scanf("%s", str) == 1){
        printf("%d\n", minCaracteresParaAdicionar(str));
    }
    return 0;
}