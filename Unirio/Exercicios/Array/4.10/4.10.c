/*
    Leia duas sequências de 10 números inteiros e construa um 
    vetor com 20 posições concatenando os elementos das duas sequências.
*/

#include <stdio.h>

int main() {
    int sequencia1[10];
    int sequencia2[10];
    int arrayTotal[20];

    printf("Digite valores da sequência 1:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &sequencia1[i]);
    }

    printf("Digite os valores da sequencia2:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &sequencia2[i]);
    }

    printf("Valores da sequência 1:\n");
    printf("[");
    for (int i = 0; i < 10; i++) {
        if (i == 9) {
            printf("%d]\n", sequencia1[i]);
        } else {
            printf("%d, ", sequencia1[i]);
        }
    }
    printf("\n");
    printf("Valores da sequência 2:\n");
    printf("[");
    for (int i = 0; i < 10; i++) {
        if (i == 9) {
            printf("%d]\n", sequencia2[i]);
        } else {
            printf("%d, ", sequencia2[i]);
        }
    }

    int j = 0;
    for (int i = 0; i < 20; i++) {
        if (i < 10) {
            arrayTotal[i] = sequencia1[i];
        } else {
            arrayTotal[i] = sequencia2[j];
            j++;
        }
    }
    
    printf("\n");
    printf("Array com todos os valores:\n");
    printf("[");
    for (int i = 0; i < 20; i++) {
        if (i == 19) {
            printf("%d]\n", arrayTotal[i]);
        } else {
            printf("%d, ", arrayTotal[i]);
        }
    }
    
    return 0;
}