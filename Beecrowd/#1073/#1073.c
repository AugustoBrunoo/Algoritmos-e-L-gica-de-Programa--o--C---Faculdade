#include <stdio.h>
#include <math.h>

/*
    Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.

    Entrada: 
    A entrada contém um valor inteiro N (5 < N < 2000).

    Saída: 
    Imprima o quadrado de cada um dos **valores pares, de 1 até N, conforme o exemplo abaixo.
*/

int main() {
    double numero, calculo, numTransformado;

    scanf("%lf", &numero);

    if (numero < 5 || numero > 2000) {
        return 1;
    }

    for (int i = 1; i <=  numero; i++) {
        if (i % 2 == 0) {
            numTransformado = i;
            calculo = pow(numTransformado, 2);

            printf("%d^2 = %.0f\n", i, calculo);
        }
    }
    

    return 0;
}