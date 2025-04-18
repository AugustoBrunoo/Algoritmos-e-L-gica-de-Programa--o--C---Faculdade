#include <stdio.h>

/*
    Os dias do ano podem ser definidos de (forma contínua). 

    Por exemplo: 01/01 é o 1º dia do ano, 05/01 é o 5º dia do ano e 03/02 é o 34º dia do ano. 
    
    Leia três valores inteiros d, m, e a e informe o dia do ano correspondente à data d/m/a.
*/

int main() {
    int dia, mes, ano, calculo;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("\n");
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("\n");
    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("\n");
    printf("-=-=-=-=-=-=-=-=-\n");

    calculo = (mes * 30 + dia) - 30;

    printf("O dia %02d/%02d é o dia %d do ano de %d\n", dia, mes, calculo, ano);
    return 0;
}