#include <stdio.h>

/*
    Leia vários números inteiros positivos até o usuário digitar zero e imprima quantos são pares.
*/

int main() {
    int numero = 1, contadorPares = 0, contadorImpares = 0;

    while (numero != 0) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            contadorPares++;
        } else {
            contadorImpares++;
        }
    }
    
    printf("O número de pares é %d | O número de ímpares é %d\n", contadorPares, contadorImpares);
    return 0;
}