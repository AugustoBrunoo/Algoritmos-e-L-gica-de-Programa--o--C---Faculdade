#include <stdio.h>

/*
    Leia dois números n e m e imprima a soma dos números entre n e m (incluindo ambos). 
    
    Suponha que n ≤ m.
*/

int main() {
    int n, m, soma;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("\n");
    printf("Digite o 2º número: ");
    scanf("%d", &m);
    printf("\n");

    soma = n + m;

    printf("A soma é %d\n", soma);
    return 0;
}