#include <stdio.h>

/*
    Leia um número inteiro n e imprima o valor do n-ésimo número harmônico 
    (considere que o 1º número harmônico é igual a 1). 
    Se n ≤ 0, imprima uma mensagem de erro.
*/

int main() {
    int numero;
    double formulaHarmonico = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Número inválido! Apenas números maiores que zero!\n");
        return 0;
    }

    printf("\n");
    printf("N : Hn (n-esimo número harmonico)\n");

    for (int i = 1; i <= numero; i++){
        formulaHarmonico += 1.0 / i;
        printf("%d: %.3f\n", i, formulaHarmonico);
    }
    printf("\n");

    return 0;
}