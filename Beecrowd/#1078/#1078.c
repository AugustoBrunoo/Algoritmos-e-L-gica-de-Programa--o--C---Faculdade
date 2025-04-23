#include <stdio.h>

/*
    Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
    1 x N = N      2 x N = 2N        ...       10 x N = 10N


*/

int main() {
    int numero;

    printf("Digite um número para a tabuada: ");
    scanf("%d", &numero);

    if (numero < 2 || numero > 1000) {
        printf("O número tem que ser maior que 2 e menor que 1000\n");
        return 1;
    }

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, numero, numero * i);
    }
    
    return 0;
}