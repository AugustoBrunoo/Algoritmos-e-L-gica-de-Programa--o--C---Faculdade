#include <stdio.h>

/*
    Leia três valores a, b e c e imprima o maior e o menor deles. 
    Implemente duas soluções distintas, uma delas sem utilizar operações lógicas.
*/

int main() {
    // Solução 2: Operadores lógicos
    int num1, num2, num3, maiorNum1, maiorNum2;
    printf("Digite o Número 1: ");
    scanf("%d", &num1);
    printf("\n");
    printf("Digite o Numero 2: ");
    scanf("%d", &num2);
    printf("\n");

    maiorNum1 = (num1 > num2) ? num1 : num2;

    printf("Digite o número 3: ");
    scanf("%d", &num3);

    maiorNum2 = (maiorNum1 > num3) ? maiorNum1 : num3; 

    printf("\n");
    printf("O maior número entre %d, %d, %d é %d\n", num1, num2, num3, maiorNum2);

    // printf("O maior número até agora é: %d\n", maiorNum1);

    return 0;
}