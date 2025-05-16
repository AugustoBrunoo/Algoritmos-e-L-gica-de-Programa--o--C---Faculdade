#include <stdio.h>

/*
    Leia uma sequência de 10 números inteiros, armazene-a em um vetor, e ao final, 
    imprima apenas os números pares, na mesma ordem fornecida.
*/

int main() {
    int sequencia[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &sequencia[i]);
    } 

    for (int j = 0; j < 10; j++) {
        if (sequencia[j] % 2 == 0) {
            printf("%d ", sequencia[j]);
        }
    }
    printf("\n");
    
    return 0;
}