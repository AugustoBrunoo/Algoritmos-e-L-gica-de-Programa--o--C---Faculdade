#include <stdio.h>
#include <math.h>

/*
    Uma data pode ser expressa como um número de 8 dígitos, no formato dd mm aaaa. 
    Por exemplo, o dia 30 de novembro de 2024 pode ser escrito nesse formato como 30 11 2024. 
    Note que nem todo número de 8 dígitos corresponde a uma data. 
    Por exemplo, o número 35112024 não corresponde a uma data, pois nenhum mês possui 35 dias.

    Leia um número n com 8 dígitos, separe o dia, mês e ano do número lido, e verifique se essa é uma data válida 
    e mostre a data na tela. Exemplo: ao ler 30112024, 25031949 imprime 25/03/1949.
*/

int main() {
    int dataJunta, numDia, numMes, numAno;

    printf("Digite a data toda junta (ddmmaaaa): ");
    scanf("%d", &dataJunta);

    numDia = dataJunta / (pow(10, 6));

    numMes = (dataJunta / 10000) % 100;

    numAno = dataJunta % 10000;

    if (numDia > 31) {
        printf("Dia %d não existe!\n", numDia);
        return 1;
    }

    if (numMes < 1 || numMes > 12) {
        printf("Mês %d não existe!\n", numMes);
        return 1;
    }

    printf("Ano formatado: %02d/%02d/%d\n", numDia, numMes, numAno);
    return 0;
}