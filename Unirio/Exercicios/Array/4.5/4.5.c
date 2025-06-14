#include <stdio.h>

/*
    Leia uma sequência de 10 números inteiros e, ao final, imprima todos os números, 
    identificando o maior e o menor número. 
    (Caso haja empate para o maior e/ou menor número da sequência, 
    identifique todos os valores empatados.)
*/

int main() {
    int vetoresDeNum[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetoresDeNum[i]);
    }

    int maiorNum = vetoresDeNum[0]; 
    int menorNum = vetoresDeNum[0];
    
    // Maior ou menor com vetores
    for (int j = 0; j < 10; j++) {
        if (vetoresDeNum[j] > maiorNum) {
            maiorNum = vetoresDeNum[j];
        }

        if (vetoresDeNum[j] < menorNum) {
            menorNum = vetoresDeNum[j];
        }
    }

    printf("Todos os números digitados:\n");
    for (int k = 0; k < 10; k++) {
        printf("%d ", vetoresDeNum[k]);
    }
    printf("\n");

    printf("Maior número: ");
    for (int m = 0; m < 10; m++) {
        if (vetoresDeNum[m] == maiorNum) {
            printf("%d ", vetoresDeNum[m]);
        }
    }

    printf("\n");

    printf("Menor número: ");
    for (int n = 0; n < 10; n++) {
        if (vetoresDeNum[n] == menorNum) {
            printf("%d ", vetoresDeNum[n]);
        }
    }
    
    printf("\n");
    return 0;
}