#include <stdio.h>

/*
    O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. 
    O problema é que Pedrinho quer calcular o tempo que o evento vai durar, 
    uma vez que ele sabe quando inicia e quando termina o evento.

    Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar 
    Pedrinho a calcular a duração deste evento.

    Entrada: 

    Como entrada, na primeira linha vai haver a descrição “Dia”, 
    seguido de um espaço e o dia do mês no qual o evento vai começar. 
    
    Na linha seguinte, será informado o momento no qual o evento vai iniciar, 
    no formato hh : mm : ss. 
    
    Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, 
    indicando o término do evento.
*/

int main() {
    int diaInicio, diaFim;

    int horaInicio, horaFim;
    int minutoInicio, minutoFim;
    int segundosInicio, segundosFim, duracaoSegundosJogo;
    int duracaoTotalInicioSeg, duracaoTotalFinalSeg;

    printf("Dia ");
    scanf("%d", &diaInicio);

    scanf("%d : %d : %d", &horaInicio, &minutoInicio, &segundosInicio);
    printf("Dia ");
    scanf("%d", &diaFim);
    scanf("%d : %d : %d", &horaFim, &minutoFim, &segundosFim);

    duracaoTotalInicioSeg = diaInicio * 86400 + horaInicio * 3600 + minutoInicio * 60 + segundosInicio;
    duracaoTotalFinalSeg = diaFim * 86400 + horaFim * 3600 + minutoFim * 60 + segundosFim;

    duracaoSegundosJogo = duracaoTotalFinalSeg - duracaoTotalInicioSeg;

    if (duracaoSegundosJogo < 60) {
        return 0;
    }

    int dias = duracaoSegundosJogo / 86400;
    duracaoSegundosJogo %= 86400;

    int horas = duracaoSegundosJogo / 3600;
    duracaoSegundosJogo %= 3600;

    int minutos = duracaoSegundosJogo / 60;

    int segundos = duracaoSegundosJogo % 60;

    printf("%d dias(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}