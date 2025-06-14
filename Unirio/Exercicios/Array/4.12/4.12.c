/*
    Leia duas sequências de 10 números inteiros e imprima todos os valores da primeira sequência 
    que aparece ao menos uma vez em cada sequência.
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
        int encontrado = 0;
        for (int j = 0; j < 10; j++) {
            if (seq1[i] == seq2[j]) {
                encontrado = 1;
                break;
            }
        }

        if (encontrado) {
            // Evitar adicionar duplicatas em seqFinal (opcional)

            int duplicado = 0;

            for (int m = 0; m < k; m++) {
                if (seqFinal[m] == seq1[i]) {
                    duplicado = 1;
                    break;
                }
            }

            if (!duplicado) {
                seqFinal[k] = seq1[i];
                k++;
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