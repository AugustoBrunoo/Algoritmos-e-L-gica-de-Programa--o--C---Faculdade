#include <stdio.h>

/*
    Leia quatro valores inteiros A, B, C e D. 
    A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: 
    DIFERENCA = (A * B - C * D).
*/

int main() {
    int a, b, c, d, diferenca;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    diferenca = (a * b) - (c * d); 

    printf("DIFERENCA = %d\n", diferenca);
    return 0;
}