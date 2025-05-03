#include <stdio.h>

/*
    Leia um número n positivo e imprima uma linha com n asteriscos separados por espaços. 
    Por exemplo, se n = 5, imprima:

    * * * * *

    Dê atenção para não imprimir espaços antes do primeiro ou após o último asterisco.

*/

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Número inválido!\n");
        return 0;
    }
    
    printf("\n");
    
    for (int i = 1; i <= num; i++) {
        if (i == num) {
            printf("*\n");
        } else {
            printf("* ");
        }
    }
    
    return 0;
}