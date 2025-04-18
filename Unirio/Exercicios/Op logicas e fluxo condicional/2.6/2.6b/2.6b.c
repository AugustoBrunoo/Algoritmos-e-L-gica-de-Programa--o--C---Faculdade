#include <stdio.h>


/*
    Leia o número do mês do ano (1 a 12) e mostre o nome do mês por extenso. 
    Se o número for inválido, imprima "Mês inválido". 
    
    Implemente duas soluções distintas, uma utilizando if e outra utilizando switch.

*/


int main() {
    // Solução 1: Com ifs
    int mes;

    printf("Digite um mês (Escolha de 1 - 12): ");
    scanf("%d", &mes);

    if (mes == 1) {
        printf("Janeiro\n");
    } else if (mes == 2) {
        printf("Fevereiro\n");
    } else if (mes == 3) {
        printf("Março\n");
    } else if (mes == 4) {
        printf("Abril\n");
    } else if (mes == 5) {
        printf("Maio\n");
    } else if (mes == 6) {
        printf("Junho\n");
    } else if (mes == 7) {
        printf("Julho\n");
    } else if (mes == 8) {
        printf("Agosto\n");
    } else if (mes == 9) {
        printf("Setembro\n");
    } else if (mes == 10) {
        printf("Outubro\n");
    } else if (mes == 11) {
        printf("Novembro\n");
    } else if (mes == 12) {
        printf("Dezembro\n");
    } else {
        printf("Mês inválido!\n");
    }


    return 0;
}