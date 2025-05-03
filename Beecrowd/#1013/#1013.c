#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”.
     
    Utilize a fórmula:

    MaiorAB = (a + b + abs(a - b)) / 2;

    Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). 
    Um segundo passo, portanto é necessário para chegar no resultado esperado.

*/

int main() {
    int maior1, maior2, a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    maior1 = (a + b + abs(a - b)) / 2;

    maior2 = (maior1 + c + abs(maior1 - c)) / 2;

    printf("%d eh o maior\n", maior2);
    
    return 0;
}