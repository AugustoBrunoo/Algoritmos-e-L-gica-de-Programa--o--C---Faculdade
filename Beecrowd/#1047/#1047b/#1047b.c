#include <stdio.h>
/*

    Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. 
    A seguir calcule a duração do jogo.

    Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.
*/

int main() {
    int horasIniciais, minutosIniciais, horasFinais, minutosFinais, duracaoJogoEmMinutosIniciais, duracaoJogoEmFinais;
    int duracaoTotal, duracaoHora, duracaoMinuto;

    scanf("%d %d %d %d", &horasIniciais, &minutosIniciais, &horasFinais, &minutosFinais);

    duracaoJogoEmMinutosIniciais = (horasIniciais * 60) + minutosIniciais;
    duracaoJogoEmFinais = (horasFinais * 60) + minutosFinais;

    if (duracaoJogoEmMinutosIniciais > duracaoJogoEmFinais) {
        duracaoTotal = (24 * 60 - duracaoJogoEmMinutosIniciais) + duracaoJogoEmFinais;
    } else if (duracaoJogoEmMinutosIniciais == duracaoJogoEmFinais) {
        duracaoTotal = 24 * 60;
    } else {
        duracaoTotal = duracaoJogoEmFinais - duracaoJogoEmMinutosIniciais;
    }

    if (duracaoTotal < 1 || duracaoTotal > (24 * 60)) {
        return 0;
    }

    duracaoHora = duracaoTotal / 60;
    duracaoMinuto = (duracaoTotal % 60);

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMinuto);

    return 0;
}