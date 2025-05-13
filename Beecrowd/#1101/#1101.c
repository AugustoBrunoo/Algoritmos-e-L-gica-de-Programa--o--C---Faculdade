#include <stdio.h>

/*
    Leia um conjunto não determinado de pares de valores M e N 

    (parar quando algum dos valores for menor ou igual a zero). 
    
    Para cada par lido, mostre a sequência do menor até o maior e 
    a soma dos inteiros consecutivos entre eles (incluindo o N e M).

    Entrada: 
    O arquivo de entrada contém um número não determinado de valores M e N. 
    A última linha de entrada vai conter um número nulo ou negativo.

    Saída: 
    Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, 
    conforme exemplo abaixo.
*/

int main() {
    int numM, numN, maiorNumero, menorNumero;

    while (1) {
        scanf("%d %d", &numM, &numN);

        if (numM <= 0 || numN <= 0) {
            break;
        }

        if (numM > numN) {
            maiorNumero = numM;
            menorNumero = numN;
        } else {
            maiorNumero = numN;
            menorNumero = numM;
        }

        int acumuladorPares = 0;
        for (int i = menorNumero; i <= maiorNumero; i++) {
            printf("%d ", i);

            acumuladorPares += i;
        }

        printf("Sum=%d", acumuladorPares);
        printf("\n");
    }
    
    return 0;
}