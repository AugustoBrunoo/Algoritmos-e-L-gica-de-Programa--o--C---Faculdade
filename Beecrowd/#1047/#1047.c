#include <stdio.h>

/*
    Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

    Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

    Entrada:
    Quatro números inteiros representando a hora de início e fim do jogo.

    Saída:
    Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
*/

int main() {
    int horaInicial, horaFinal, minutoInicial, minutoFinal;
    int totalMinInicial, totalMinFinal, duracaoTotalMin;
    int duracaoHora, duracaoMinuto;

    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    horaInicial = horaInicial * 60;
    horaFinal = horaFinal * 60;

    totalMinInicial = horaInicial + minutoInicial;
    totalMinFinal = horaFinal + minutoFinal;

    if (totalMinFinal <= totalMinInicial) {
        totalMinFinal += 24 * 60;
    }

    duracaoTotalMin = totalMinFinal - totalMinInicial;

    duracaoHora = duracaoTotalMin / 60;
    duracaoMinuto = duracaoTotalMin % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMinuto);

    return 0;
}