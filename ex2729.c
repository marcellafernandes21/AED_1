#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 1000
#define MAX_LETRAS 21

typedef struct {
    char item[MAX_LETRAS];
} Item;

int compareItems(const void *a, const void *b){
    return strcmp(((Item *)a)->item, ((Item *)b)->item);
}

int main(){
    int N, i, count;
    Item items[MAX_ITEMS];
    char input[MAX_ITEMS * MAX_LETRAS];
    
    scanf("%d", &N);
    
    while (N--){
        scanf(" %[^\n]", input);
        
        count = 0;
        char *token = strtok(input, " ");
        while (token != NULL && count < MAX_ITEMS){
            strcpy(items[count++].item, token);
            token = strtok(NULL, " ");
        }
        qsort(items, count, sizeof(Item), compareItems);
        
        printf("%s", items[0].item);
        for (i = 1; i < count; i++){
            if (strcmp(items[i].item, items[i - 1].item) != 0){
                printf(" %s", items[i].item);
            }
        }
        printf("\n");
    }
    
    return 0;
}