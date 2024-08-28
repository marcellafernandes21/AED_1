#include <stdio.h>

#define GRID_SIZE 9

int verificarLinha(int grid[GRID_SIZE][GRID_SIZE], int linha){
    int numeros[GRID_SIZE + 1] = {0};
    
    for (int coluna = 0; coluna < GRID_SIZE; coluna++){
        int numero = grid[linha][coluna];
        if (numero < 1 || numero > GRID_SIZE || numeros[numero] > 0){
            return 0;
        }
        numeros[numero]++;
    }
    return 1;
}
int verificarColuna(int grid[GRID_SIZE][GRID_SIZE], int coluna){
    int numeros[GRID_SIZE + 1] = {0};
    
    for (int linha = 0; linha < GRID_SIZE; linha++){
        int numero = grid[linha][coluna];
        if (numero < 1 || numero > GRID_SIZE || numeros[numero] > 0){
            return 0;
        }
        numeros[numero]++;
    }
    return 1;
}
int verificarQuadrante(int grid[GRID_SIZE][GRID_SIZE], int inicioLinha, int inicioColuna){
    int numeros[GRID_SIZE + 1] = {0};
    
    for (int linha = inicioLinha; linha < inicioLinha + 3; linha++){
        for(int coluna = inicioColuna; coluna < inicioColuna + 3; coluna++){
            int numero = grid[linha][coluna];
            if (numero < 1 || numero > GRID_SIZE || numeros[numero] > 0){
                return 0;
            }
            numeros[numero]++;
        }
    }
    return 1;
}
int main(){
    int numInstancias;
    scanf("%d", &numInstancias);
    
    for (int instancia = 1; instancia <= numInstancias; instancia++){
        int grid[GRID_SIZE][GRID_SIZE];
        
        for (int i = 0; i < GRID_SIZE; i++){
            for (int j = 0; j < GRID_SIZE; j++){
                scanf("%d", &grid[i][j]);
            }
        }
        int ehSudoku = 1;
        for (int i = 0; i < GRID_SIZE; i++){
            if(!verificarLinha(grid, i) || !verificarColuna(grid, i) || !verificarQuadrante(grid, i / 3 * 3, i % 3 * 3)){
               ehSudoku = 0;
               break;
            }
        }
        printf("Instancia %d\n", instancia);
        printf("%s\n\n", ehSudoku ? "SIM" : "NAO");
    }
    return 0;
}