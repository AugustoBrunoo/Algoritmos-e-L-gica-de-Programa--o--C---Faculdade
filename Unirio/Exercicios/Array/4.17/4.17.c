/*
    Leia uma matriz de 4x4 números inteiros e imprima sua transposta.

    trocar linhas por colunas
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
    
    /* Matriz */
    printf("Matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        } 
        printf("\n");
    }

    printf("\n");

    printf("Matriz Transposta:\n");
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}