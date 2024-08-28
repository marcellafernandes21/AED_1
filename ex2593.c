#include <stdio.h>
#include <string.h>

#define MAX_TEXT_SIZE 10001
#define MAX_WORDS 128
#define MAX_WORD_SIZE 51

int main (){
    char texto[MAX_TEXT_SIZE];
    int numPalavras;
    char palavras[MAX_WORDS][MAX_WORD_SIZE];
    
    fgets(texto, MAX_TEXT_SIZE, stdin);
    texto[strcspn(texto, "\n")] = 0;
    
    scanf("%d", &numPalavras);
    
    for (int i = 0; i < numPalavras; i++){
        scanf("%s", palavras[i]);
    }
    for (int i = 0; i < numPalavras; i++){
        char *ptr = texto;
        int encontrado = 0;
        
        while ((ptr = strstr(ptr, palavras[i])) != NULL){
            if((ptr == texto || *(ptr - 1) == ' ') && (*(ptr + strlen(palavras[i])) == ' ' || *(ptr + strlen(palavras[i])) == '\0')){
                if(encontrado){
                    printf(" ");
                }
                printf("%ld", ptr - texto);
                encontrado = 1;
            }
            ptr += strlen(palavras[i]);
        }
        if (!encontrado){
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}