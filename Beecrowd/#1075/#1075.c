#include <stdio.h>

/*
    Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.
    N < 10000
*/

int main() {
    int numerosAutomaticos = 1, N = 0;

    printf("Digite um número para N: ");
    scanf("%d", &N);

    while (numerosAutomaticos <= 10000) {
        if (numerosAutomaticos % N == 2) {
            printf("%d\n", numerosAutomaticos);
        }
        numerosAutomaticos++;
    }
    
    return 0;
}