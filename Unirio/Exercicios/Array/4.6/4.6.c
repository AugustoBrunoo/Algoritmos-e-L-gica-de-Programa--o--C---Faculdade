/*
    Leka uma sequência de 10 números inteiros e, ao final, imprima todos os números, 
    identificando o maior e o menor número em magnitude (isto é, ignorando o sinal do número). 
    (Caso haja empate para o maior e/ou menor número da sequência, identifique todos os valores empatados.)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetoresNum[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetoresNum[i]);
    }

    printf("Todos os números: ");
    for (int j = 0; j < 10; j++) {
        printf("%d ", vetoresNum[j]);
    }
    
    int maiorNumAbs = abs(vetoresNum[0]);
    int menorNumAbs = abs(vetoresNum[0]);

    for (int k = 0; k < 10; k++) {
        int absValor = abs(vetoresNum[k]);
        if (absValor > maiorNumAbs) {
            maiorNumAbs = absValor;
        }

        if (absValor < menorNumAbs) {
            menorNumAbs = absValor;
        }
    }

    printf("\n");
    
    printf("Maior número: ");
    for (int i = 0; i < 10; i++) {
        if (abs(vetoresNum[i]) == maiorNumAbs) {
            printf("%d ", abs(vetoresNum[i]));
        }
    }
    printf("\n");

    printf("Menor número: ");
    for (int i = 0; i < 10; i++) {
        if (abs(vetoresNum[i]) == menorNumAbs) {
            printf("%d ", abs(vetoresNum[i]));
        }
    }
    printf("\n");
    
    return 0;
}