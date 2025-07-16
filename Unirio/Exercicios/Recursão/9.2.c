#include <stdio.h>

// A potência a^b pode ser expressa recursivamente da seguinte forma quando a e b são inteiros e b ≥ 0:
/*
    Implemente, de forma recursiva, a função
    int pow( int a, unsigned int b );
    que calcula a potência a^b.

*/

int pow(int a, unsigned int b) {
    if (b == 0) return 1;

    if (b < 0) {
        return 1.0 / pow(a, -b);
    }

    return a * pow(a, b - 1);

}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int resultado = pow(num1 , num2);

    printf("A resposta é: %d\n", resultado);

    return 0;
}