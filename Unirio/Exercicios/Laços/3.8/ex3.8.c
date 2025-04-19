#include <stdio.h>

/*
    Leia três números inteiros positivos n, i e j, e imprima os n primeiros inteiros positivos que 
    são múltiplos de i ou de j. 

    (Inclua os que são múltiplos dos dois.) 
    
    Por exemplo: para n = 10, i = 2 e j = 3, imprima: 2, 3, 4, 6, 8, 9, 10, 12, 14, 15.
*/

int main() {
    int n, i , j;
    printf("Escolha um número para quantidade de Multiplos a aparecer: \n");
    printf("Qual é a quantidade deseja: ");
    scanf("%d", &n);
    printf("\n");
    printf("Digite os 2 multiplo a participar: \n");
    printf("Multiplo 1: ");
    scanf("%d", &i);
    printf("\n");
    printf("Multiplo 2: ");
    scanf("%d", &j);
    printf("\n");

    int contador = 1;
    int numero = 1;
    while (contador <= n) {

        if (numero % i == 0) {
            if (contador == 10) {
                printf("%d.\n", numero);
                contador++;
            } else {
                printf("%d, ", numero);
                contador++;
            }
        } else if (numero % j == 0) {

            if (contador == 10) {
                printf("%d.\n", numero);
                contador++;
            } else {
                printf("%d, ", numero);
                contador++;
            }
        } else if (numero % i == 0 && numero % j == 0) {
            if (contador == 10) {
                printf("%d.\n", numero);
                contador++;
            } else {
                printf("%d, ", numero);
                contador++;
            }   
        }
        numero++;
    }

    return 0;
}