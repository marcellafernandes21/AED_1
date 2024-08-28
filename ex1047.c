#include <stdio.h>
 
int main() {
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    int duracaoHoras, duracaoMinutos;
    
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);
    
    int totalMinutosInicial = horaInicial * 60 + minutoInicial;
    int totalMinutosFinal = horaFinal * 60 + minutoFinal;
    
    if(totalMinutosFinal <= totalMinutosInicial){
        totalMinutosFinal += 24 * 60;
    }
    int duracaoTotalMinutos = totalMinutosFinal - totalMinutosInicial;
    duracaoHoras = duracaoTotalMinutos / 60;
    duracaoMinutos = duracaoTotalMinutos % 60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHoras, duracaoMinutos);
    return 0;
}