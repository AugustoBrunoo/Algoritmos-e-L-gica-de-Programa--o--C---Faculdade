#include <stdio.h>

/*
    O calendário que utilizamos no Brasil (e boa parte do mundo) é chamado de calendário gregoriano. 
    Ele foi introduzido em 1582 pelo Papa Gregório XIII para melhor aproximar a duração (média) de um ano civil 
    e do ano trópico (duração de uma volta da Terra em torno do Sol). 
    
    A principal marca desse calendário é a regra dos anos bissextos:

    Todo ano que é divisível por 4 é um ano bissexto, exceto pelos anos divisíveis por 100 (anos seculares), 
    mas estes anos seculares são anos bissextos se forem divisíveis por 400.

    Por exemplo, os anos 1700, 1800 e 1900 não são bissextos, mas o ano 2000 é.

    Leia um ano e determine se ele é (i) um ano secular e (ii) um ano bissexto.

    ano secular: ano % 100 == 0


*/

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 100 == 0) {
        printf("O ano %d é um ano secular", ano);
    } else {
        printf("O ano %d é um ano secular", ano);
    }

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf(" e é bissexto!\n");
    } else {
        printf(" e não é bissexto\n");
    }

    
    return 0;
}