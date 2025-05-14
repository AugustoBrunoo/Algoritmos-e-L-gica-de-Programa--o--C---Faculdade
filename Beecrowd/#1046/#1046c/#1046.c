#include <stdio.h>

/*
    Leia a hora inicial e a hora final de um jogo. 
    A seguir calcule a duração do jogo, sabendo que 
    o mesmo pode começar em um dia e terminar em outro, 
    tendo uma duração mínima de 1 hora e máxima de 24 horas.
*/

int main() {
    int horaInicial, horaFinal, duracaoHoras;

    scanf("%d %d", &horaInicial, &horaFinal);

    if (horaInicial > horaFinal) {
        duracaoHoras = (24 - horaInicial) + horaFinal;
    } else if (horaInicial == horaFinal) {
        duracaoHoras = 24;
    } else {
        duracaoHoras = horaFinal - horaInicial;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracaoHoras);

    return 0;
}