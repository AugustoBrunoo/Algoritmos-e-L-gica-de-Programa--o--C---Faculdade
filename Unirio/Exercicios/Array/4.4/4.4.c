#include <stdio.h>

/*
    Leia uma sequência de 10 números inteiros, armazene-a em um vetor, 
    e depois, leia um inteiro adicional k. Ao final, imprima os números da sequência 
    que são divisíveis por k.
*/

int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Digite o valor (k):\n");

    int k;
    scanf("%d", &k);

    printf("\n");
    for (int j = 0; j < 10; j++) {
        if (vetor[j] % k == 0) {
            printf("%d ", vetor[j]);
        }
    }
    
    printf("\n");
    
    
    return 0;
}