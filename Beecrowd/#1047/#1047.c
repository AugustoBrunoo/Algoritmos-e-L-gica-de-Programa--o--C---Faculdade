#include <stdio.h>

/*
    Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

    Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

    Entrada:
    Quatro números inteiros representando a hora de início e fim do jogo.

    Saída:
    Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
*/

int main()
{
    int horaInicial, horaFinal, minutoInicial, minutoFinal;
    int totalMinInicial, totalMinFinal, duracaoTotalMin;
    int duracaoHora, duracaoMinuto;

    printf("Digite a hora inicial do jogo: ");
    scanf("%d", &horaInicial);
    printf("Digite o minuto inicial do jogo: ");
    scanf("%d", &minutoInicial);
    printf("\n");
    printf("Digite a hora final do jogo: ");
    scanf("%d", &horaFinal);
    printf("Digite o minuto final do jogo: ");
    scanf("%d", &minutoFinal);
    printf("\n");

    totalMinInicial = (horaInicial * 60) + minutoInicial;
    totalMinFinal = (horaFinal * 60) + minutoFinal;

    // se o teempo final for menor ou igual ao inicial
    if (totalMinFinal <= totalMinInicial) {
        totalMinFinal += 24 * 60; //  adiciona 24h em 60 min
    }

    duracaoTotalMin = totalMinFinal - totalMinInicial;

    duracaoHora = duracaoTotalMin / 60;
    duracaoMinuto = duracaoTotalMin % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMinuto);

    return 0;
}