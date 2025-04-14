#include <stdio.h>

/*
    Leia três números inteiros, a, b, n (com n ≥ 2) e determine qual é a razão da progressão aritmética (PA) 
    com n termos começando em a e terminando em b. Apresente uma mensagem de erro se n < 2.
*/

int main() {
    int a1, an, n, r;
    printf("Mostrador de razões\n");
    printf("----------------------\n");
    printf("Digite um valor para a1: ");
    scanf("%d", &a1);
    printf("\n");
    printf("Digite um valor para an: ");
    scanf("%d", &an);
    printf("\n");
    printf("*Digite um valor maior ou igual a 2 para n!!\n");
    printf("Digite um valor para n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("O valor incorreto para N! Tente novamente!\n");
        return 1;
    }

    r = (an - a1) / (n - 1);

    printf("A razão dessa P.A é: %d\n", r);

    return 0;
}