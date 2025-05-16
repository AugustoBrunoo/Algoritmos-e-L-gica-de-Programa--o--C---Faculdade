#include <stdio.h>
#include <stdlib.h>

// Leia um número n e imprima o seu quadrado.

int main() {
    int num;
    printf("Digite um número e direi o seu quadrado!\n");
    printf("Digite aqui: ");
    scanf("%d", &num);

    int quadrado = num * num;

    printf("O quadrado do número %d é %d\n", num, quadrado);

    return 0;
}