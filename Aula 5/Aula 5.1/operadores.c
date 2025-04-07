#include <stdio.h>
#include <stdlib.h>

/* Operadores Aritméticos: 

Soma: +
Subtração: -
Multiplicação: *
Divisão: /
Resto da divisão inteira: %

Atenção: Existe precedência entre operadores!

*/

int main() {
    int A, B, soma, subtracao, multiplicacao, divisao;

    printf("Digite o 1º número:\n");
    scanf("%d", &A); // Não esqueca do &!!
    printf("Digite o 2º número:\n");
    scanf("%d", &B);

    // Manipulação de conta
    soma = A + B;
    subtracao = A - B;
    multiplicacao = A * B;
    divisao = A / B;

    printf("Resultados:\n");
    printf("Soma: %d + %d = %d.\n",A, B, soma);
    printf("Subtração: %d - %d = %d\n", A, B, subtracao);
    printf("Multiplicação: %d x %d = %d\n", A, B, multiplicacao);
    printf("Divisão: %d / %d = %d\n", A, B, divisao);
    
    return 0;
}