#include <stdio.h>
#include <string.h>

#define MAXN 500

int n, p;
int preta[MAXN + 1][MAXN + 1];
int branca[MAXN + 1][MAXN + 1];

void preprocessar(int tabuleiro[][MAXN]){
    memset(preta, 0, sizeof(preta));
    memset(branca, 0, sizeof(branca));
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            preta[i][j] = preta[i - 1][j] + preta[i][j - 1] - preta[i - 1][j - 1] + (tabuleiro[i - 1][j - 1] == 1);
            branca[i][j] = branca[i - 1][j] + branca[i][j - 1] - branca[i - 1][j -1] + (tabuleiro[i - 1][j - 1] == 2);
        }
    }
}

int contar(int x1, int y1, int x2, int y2, int cor){
    return (cor == 1 ? preta : branca)[x2][y2] -
           (cor == 1 ? preta : branca)[x1 - 1][y2] -
           (cor == 1 ? preta : branca)[x2][y1 - 1] +
           (cor == 1 ? preta : branca)[x1 - 1][y1 - 1];
}

int main() {
    scanf("%d %d", &n, &p);
    
    int tabuleiro[MAXN][MAXN] = {0};
    
    for (int i = 0; i < p; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        tabuleiro[x - 1][y - 1] = 1;
    }
    for (int i = 0; i < p; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        tabuleiro[x - 1][y - 1] = 2;
    }
    preprocessar(tabuleiro);
    
    int contagem_pretas = 0, contagem_brancas = 0;
    for (int tamanho = 1; tamanho <= n; tamanho++){
        for (int i = 1; i <= n - tamanho + 1; i++){
            for (int j = 1; j <=n - tamanho + 1; j++){
                int x2 = i + tamanho - 1;
                int y2 = j + tamanho - 1;
                
                int pedras_pretas = contar(i, j, x2, y2, 1);
                int pedras_brancas = contar(i, j, x2, y2, 2);
                
                if (pedras_pretas > 0 && pedras_brancas == 0){
                    contagem_pretas++;
                } else if (pedras_brancas > 0 && pedras_pretas == 0){
                    contagem_brancas++;
                }
            }
        }
    }
    printf("%d %d\n", contagem_pretas, contagem_brancas);
    
    return 0;
}