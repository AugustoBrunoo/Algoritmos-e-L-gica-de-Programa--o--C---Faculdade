/*
    Adapte sua solução do exercício 4.12 para imprimir cada valor apenas mais de uma vez, 
    mesmo no caso de um número aparecer mais de uma vez em qualquer sequência.
*/

#include <stdio.h>

int main() {
    int seq1[10];
    int seq2[10];
    int seqFinal[10];
    int k = 0; // Indice de insercao final

    printf("Sequência 1: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &seq1[i]);
    }

    printf("Sequência 2: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &seq2[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (seq1[i] == seq2[j]) {
                seqFinal[k] = seq1[i];
                k++;
                break;
            }
        }

    }

    printf("Valores que aparecem nas duas sequências:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", seqFinal[i]);
    }

    printf("\n");
    
    return 0;
}