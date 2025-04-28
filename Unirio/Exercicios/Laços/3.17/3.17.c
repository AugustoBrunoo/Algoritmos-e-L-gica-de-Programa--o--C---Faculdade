#include <stdio.h>

/*
    Leia vários números inteiros positivos até o usuário digitar zero e, ao final, 
    imprima separadamente as somas dos números pares e dos números ímpares.
*/

int main() {
    int numero = 1, somaPares = 0, somaImpares = 0;

    while (numero != 0) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Digite um número positivo!!\n");
            continue;
        }
        

        if (numero % 2 == 0) {
            somaPares += numero;
        } else {
            somaImpares += numero;
        }
    }

        printf("A soma dos pares é de %d\n", somaPares);
        printf("A soma dos ímpares é de %d\n", somaImpares);
    
    return 0;
}