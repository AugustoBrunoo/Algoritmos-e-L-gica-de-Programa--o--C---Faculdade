#include <stdio.h>

/*
    Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, 
    sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora 
    e máxima de 24 horas.

    Entrada:
    A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

    Saída:
    Apresente a duração do jogo conforme exemplo abaixo.

    duracao = (24 - tempo1) + tempo2;

    (24 - tempo1) quanto falta para dar meia noite
    (+ tempo2) soma com o quanto falta depois de 00h
*/

int main() {
    int tempo1, tempo2, duracao;

    printf("Digite o horário inicial do jogo: ");
    scanf("%d", &tempo1);
    printf("\n");
    printf("Digite o horário final do jogo: ");
    scanf("%d", &tempo2);

    if (tempo1 == tempo2) { // quando iguais, deu 24 hrs de jogo
        duracao = 24;
    } else if (tempo1 < tempo2) {
        duracao = tempo2 - tempo1; // se o tempo 1 for menor q 2 então foi no mesmo dia
    } else {
        duracao = (24 - tempo1) + tempo2;  // se o tempo final for menor que o inicial, acabou no dia seguinte
    }

    printf("O JOGO DUROU %d\n", duracao);

    return 0;
}