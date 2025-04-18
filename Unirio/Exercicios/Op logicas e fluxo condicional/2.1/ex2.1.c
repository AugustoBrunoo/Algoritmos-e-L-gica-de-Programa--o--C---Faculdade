#include <stdio.h>
#include <math.h>

/*
    Leia três valores a, b e c e imprima o maior e o menor deles. 
    Implemente duas soluções distintas, uma delas sem utilizar operações lógicas.
*/

int main() {
    double num1, num2, num3, maiorNum;
    // Solução 1: Usando fmax() da bibiloteca math.h
    // fmax() serve apenas para numeros double e apenas em números
    printf("Digite o valor 1: ");
    scanf("%lf", &num1);
    printf("\n");
    printf("Digite o valor 2: ");
    scanf("%lf", &num2);
    printf("\n");
    printf("Digite o valor 3: ");
    scanf("%lf", &num3);
    
    maiorNum = fmax(fmax(num1, num2), num3);

    printf("O maior número entre %.0f %.0f %.0f é %.0f\n", num1, num2, num3, maiorNum);

    return 0;
}