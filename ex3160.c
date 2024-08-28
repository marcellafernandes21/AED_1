#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_AMIGOS 1000
#define MAX_NOME 50

bool amigoExiste(char amigos[][MAX_NOME], int numAmigos, const char *novoAmigo){
    for (int i = 0; i < numAmigos; i++){
        if(!strcmp(amigos[i], novoAmigo)){
            return true;
        }
    }
    return false;
}
int main (){
    char amigos[MAX_AMIGOS][MAX_NOME] = {0};
    char novosAmigos[MAX_AMIGOS][MAX_NOME] = {0};
    char amigoIndicado[MAX_NOME];
    char temp[MAX_AMIGOS * MAX_NOME];
    int numAmigos = 0, numNovosAmigos = 0, posicaoAmigo = -1;
    
    fgets(temp, sizeof(temp), stdin);
    temp[strcspn(temp, "\n")] = 0;
    char *token = strtok(temp, " ");
    while (token){
        if (!amigoExiste(amigos, numAmigos, token)){
            strcpy(amigos[numAmigos++], token);
        }
        token = strtok(NULL, " ");
    }
    
    fgets(temp, sizeof(temp), stdin);
    temp[strcspn(temp, "\n")] = 0;
    token = strtok(temp, " ");
    while (token) {
        if (!amigoExiste(novosAmigos, numNovosAmigos, token)){
            strcpy(novosAmigos[numNovosAmigos++], token);
        }
        token = strtok(NULL, " ");
    }
    
    fgets(amigoIndicado, sizeof(amigoIndicado), stdin);
    amigoIndicado[strcspn(amigoIndicado, "\n")] = 0;
    
    for (int i = 0; i < numAmigos; i++){
        if(!strcmp(amigos[i], amigoIndicado)){
            posicaoAmigo = i;
            break;
        }
    }
    
    if (posicaoAmigo == -1){
        for (int i = 0; i < numAmigos; i++){
            if (i > 0) printf(" ");
            printf("%s", amigos[i]);
        }
        for (int i = 0; i < numNovosAmigos; i++){
            if (numAmigos > 0 || i > 0) printf(" ");
            printf("%s", novosAmigos[i]);
        }
    } else {
        for (int i = 0; i < posicaoAmigo; i++){
            if (i > 0) printf(" ");
            printf("%s", amigos[i]);
        }
        for (int i = 0; i < numNovosAmigos; i++){
            if (posicaoAmigo > 0 || i > 0) printf(" ");
            printf("%s", novosAmigos[i]);
        }
        for (int i = posicaoAmigo; i < numAmigos; i++){
            printf(" %s", amigos[i]);
        }
    }
    
    printf("\n");
    return 0;
}