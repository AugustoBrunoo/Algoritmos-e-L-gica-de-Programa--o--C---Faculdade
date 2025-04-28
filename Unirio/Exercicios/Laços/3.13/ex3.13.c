#include <stdio.h>

/*
    Leia um número inteiro positivo n e informe quantos dígitos ele tem.

*/

int main() {
    int numero, calculo, numeroInicial;

    printf("Digite um número: ");
    scanf("%d", &numero);

    numeroInicial = numero;

    int i = 10;
    int contador = 0;

    do {
        calculo = numero / i;

        numero = calculo;
        
        contador++;
    } while (numero != 0);
    

    printf("O número %d tem %d dígitos.\n", numeroInicial, contador);
    return 0;
}