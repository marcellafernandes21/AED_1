#include <stdio.h>
 
int main() {
    int N,M;
    scanf("%d %d", &N, &M);
    
    int v[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &v[i]);
    }
    int c[M];
    for (int j = 0; j < M; j++){
        scanf("%d", &c[j]);
    }
    int tempo_por_caixa[N];
    for (int i = 0; i < N; i++){
        tempo_por_caixa[i] = 0;
    }
    int tempo_total = 0;
    for (int j = 0; j < M; j++){
        int tempo_minimo = tempo_por_caixa[0];
        int caixa_minimo = 0;
        for (int i = 1; i < N; i++){
            if (tempo_por_caixa[i] < tempo_minimo){
                tempo_minimo = tempo_por_caixa[i];
                caixa_minimo = i;
            }
        }
        tempo_por_caixa[caixa_minimo] += v[caixa_minimo] * c[j];
        if (tempo_por_caixa[caixa_minimo] > tempo_total){
            tempo_total = tempo_por_caixa[caixa_minimo];
        }
    }
    printf("%d\n", tempo_total);
    
    return 0;
}