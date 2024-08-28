#include <stdio.h>
 
int main() {
    int dia_inicio, hora_inicio, minuto_inicio, segundo_inicio;
    int dia_fim, hora_fim, minuto_fim, segundo_fim;
    
    char dia[4];
    
    scanf("%s %d", dia, &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &minuto_inicio, &segundo_inicio);
    scanf("%s %d", dia, &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &minuto_fim, &segundo_fim);
    
    int duracao_segundos = (dia_fim - dia_inicio) * 24 * 60 * 60 + 
                           (hora_fim - hora_inicio) * 60 * 60 +  
                           (minuto_fim - minuto_inicio) * 60 + 
                           (segundo_fim - segundo_inicio);
    
    int dias = duracao_segundos / (24 * 60 * 60);
    duracao_segundos %= (24 * 60 * 60);
    int horas = duracao_segundos / (60 * 60);
    duracao_segundos %= (60 * 60);
    int minutos = duracao_segundos / 60;
    int segundos = duracao_segundos % 60;
    
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);
    return 0;
}