#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000
 
int main() {
    char expressao[MAX_SIZE + 1];
    
    while (fgets(expressao, sizeof(expressao), stdin) && expressao[0] != '\n'){
        expressao[strcspn(expressao, "\n")] = 0;
        
        int contador = 0;
        int correto = 1;
        
        for (size_t i = 0; i < strlen(expressao); i++){
            if (expressao[i] == '('){
                contador++;
            } else if (expressao[i] == ')'){
                contador--;
                if (contador < 0){
                    correto = 0;
                    break;
                }
            }
        }
        if (contador != 0){
            correto = 0;
        }
        printf("%s\n", correto ? "correct" : "incorrect");
    }
    return 0;
}