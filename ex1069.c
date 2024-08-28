#include <stdio.h>
#include <string.h>

int contarDiamantes(char str[]){
    int diamantes = 0;
    int abertos = 0;
    
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '<'){
            abertos++;
        } else if (str[i]== '>'){
            if (abertos > 0){
                diamantes++;
                abertos--;
            }
        }
    }
    return diamantes;
}

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--){
        char str[1001];
        scanf("%s", str);
        printf("%d\n", contarDiamantes(str));
    }
    return 0;
}