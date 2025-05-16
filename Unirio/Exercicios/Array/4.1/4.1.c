#include <stdio.h>

/*
    Leia uma sequência de 10 números inteiros, armazene-a em um vetor, e ao final, 
    imprima quantos números positivos e negativos essa sequência contém.
*/

int main() {
    int sequencia[10];
    int negativo = 0, positivo = 0; 

    for (int i = 0; i < 10; i++) {
        scanf("%d", &sequencia[i]);
    }

    for (int j = 0; j < 10; j++) {
        if (sequencia[j] < 0) {
            negativo++;
        } else {
            positivo++;
        }
    }
    
    printf("O vetor de 10 elementos tem: %d números positivos e %d numeros negativos\n", positivo, negativo);
    
    return 0;
}