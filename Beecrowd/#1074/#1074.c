#include <stdio.h>
#include <string.h>

/*
    Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. 

    Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido 
    é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). 
    
    No caso do valor ser igual a zero (0), 
    embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir 
    apenas NULL.


*/

int main() {
    int numero;

    printf("Digite um valor: ");
    scanf("%d", &numero);

    char valor1[10];
    char valor2[10];

    if (numero == 0) {
        strcpy(valor1, "NULL"); // Armazena a string na variavel valor1
        printf("Número %d: %s\n", numero, valor1);

    } else if (numero % 2 == 0) {
        strcpy(valor1, "EVEN");

        if (numero > 0) {
            strcpy(valor2, "POSITIVE");
        } else {
            strcpy(valor2, "NEGATIVE");
        }

        printf("Número (%d): %s  %s\n", numero, valor1, valor2);


    } else {
        strcpy(valor1, "ODD");

        if (numero > 0) {
            strcpy(valor2, "POSITIVE");
        } else {
            strcpy(valor2, "NEGATIVE");
        }

        printf("Número (%d): %s  %s\n", numero, valor1, valor2);

    }

    return 0;
}