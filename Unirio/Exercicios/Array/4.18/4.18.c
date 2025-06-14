/*
    Leia uma matriz de 4x4 números inteiros e imprima a soma dos elementos de sua diagonal 
    principal e a soma dos elementos de sua diagonal secundária.

    diagonal principal -> i = j
    diagonal secundária -> i + j = n (4) - 1

    **Diagonal só existe em matrizes quadradas [2x2], [4x4] etc
*/

#include <stdio.h>

#define N 4

int main() {
    int matriz[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }  
    }

    printf("\n");

    printf("Matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");  
    }
    

    int somaDiagonalPrincipal = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                somaDiagonalPrincipal += matriz[i][j];
            }
        }  
    }

    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal);

    int somaDiagonalSecundaria = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i + j == N - 1) {
                somaDiagonalSecundaria += matriz[i][j];
            }
        }  
    }

    printf("Soma da diagonal secundária: %d\n", somaDiagonalSecundaria);
    

    return 0;
}

