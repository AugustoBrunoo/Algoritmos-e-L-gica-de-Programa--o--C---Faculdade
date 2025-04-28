#include <stdio.h>

/*

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