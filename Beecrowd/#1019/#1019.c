#include <stdio.h>

/*
    Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, 
    e informe-o expresso no formato horas:minutos:segundos.

    Entrada: 
    O arquivo de entrada contém um valor inteiro N.

    Saída: 
    Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, 
    conforme exemplo fornecido.
*/

int main() {
    int tempoEmSegundos, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempoEmSegundos);

    horas = tempoEmSegundos / 3600;
    minutos = (tempoEmSegundos % 3600) / 60;
    segundos = (tempoEmSegundos % 3600) % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
    
    return 0;
}