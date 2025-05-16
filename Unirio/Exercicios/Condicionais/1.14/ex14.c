#include <stdio.h>

/*
    Calcule e imprima o n-ésimo termo an de uma progressão aritmética (PA). 
    Para isso, seu programa deverá ler o 1º termo a1, a quantidade n de termos e a razão r. 
    Considere que a1, n e r são inteiros.

    an = a1 + (n - 1) * r

*/

int main() {
    int a1, an, n, r;
    printf("Progressão Aritmética: Calculo n-esimo termo\n");
    printf("Digite o a1 da PA: ");
    scanf("%d", &a1);
    printf("Digite o N (Numero de termos) da PA: ");
    scanf("%d", &n);
    printf("Digite a razão da PA: ");
    scanf("%d", &r);
    printf("\n");
    an = a1 + (n - 1) * r;

    printf("o an dessa P.A vale: %d\n", an);
    return 0;
}