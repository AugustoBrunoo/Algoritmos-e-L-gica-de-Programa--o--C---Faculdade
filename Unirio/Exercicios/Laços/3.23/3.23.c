#include <stdio.h>

/*
    Leia um número inteiro n e imprima o valor do n-ésimo número triangular 
    (considere que o 0-ésimo número triangular é igual a 0). 
    Se n < 0, imprima uma mensagem de erro.
*/

int main() {
    int numero, formulaNumTriangular;

    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero < 0){
        printf("Número inválido! Apenas números positivos!\n");
        return 0;
    }

    for (int i = 0; i <= numero; i++) {
        formulaNumTriangular = i * (i + 1) / 2;

        printf("O valor do n-ésimo número triangular de %d : %d\n", i, formulaNumTriangular);
    }
    
    return 0;
}