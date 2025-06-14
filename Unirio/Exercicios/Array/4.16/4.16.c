/*
    Leia uma matriz de 4x4 números inteiros e imprima a soma de cada linha e de cada coluna desta matriz.
*/

#include <stdio.h>

int main() {
    int matriz[4][4];
    int somaLinha = 0, somaColuna = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Matriz: 

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Soma das Linhas:

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
           somaLinha += matriz[i][j];
        }

        printf("Soma da linha %d: %d", i, somaLinha);
        somaLinha = 0;

        printf("\n");
    }
    
    printf("\n");

    // Soma das Colunas: 
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
            somaColuna += matriz[i][j];
        }
        printf("Soma da coluna %d: %d", j, somaColuna);
        somaColuna = 0;

        printf("\n");
    }
    

    return 0;
}