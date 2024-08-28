#include <stdio.h>
 
int main() {
    char D, N[101];
    
    while (scanf("%c %s", &D, N) != EOF){
        if( D == '0' && N[0] == '0'){
            break;
        }
        int i, j = 0;
        char novoN[101];
        
        for (i = 0; N[i] != '\0'; i++){
            if (N[i] != D){
                novoN[j++] = N[i];
            }
        }
        novoN[j] = '\0';
        
        if (j == 0){
            printf("0\n");
        } else {
            i = 0;
            while (novoN[i] == '0' && novoN[i + 1] != '\0'){
                i++;
            }
            for (j = 0; novoN[i] != '\0'; i++, j++){
                novoN[j] = novoN[i];
            }
            novoN[j] = '\0';
            printf("%s\n", novoN);
        }
        scanf("%*c");
    }
    return 0;
}