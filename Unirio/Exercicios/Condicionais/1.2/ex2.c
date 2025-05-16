#include <stdio.h>

// Leia dois números n e k e imprima o resto da divisão (%) de n por k.

int main() {
    int num1, num2;

    printf("Digite um número e direi o resto de divisão entre eles!\n");
    printf("\n");
    printf("Digite o 1º número: ");
    scanf("%d", &num1);
    printf("\n");
    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    int restoDaDivisao = num1 % num2;
    printf("\n");
    printf("O resto da divisão entre %d e %d é %d\n", num1, num2, restoDaDivisao);

    return 0;
}