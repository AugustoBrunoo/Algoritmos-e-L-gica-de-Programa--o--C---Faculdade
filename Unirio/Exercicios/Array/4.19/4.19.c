/*
    Leia duas matrizes A e B de 2x3 números inteiros e construa a matriz 2x3 C = A+B.
*/

#include <stdio.h>

#define I 2
#define J 3

int main() {
    int matrizA[I][J];
    int matrizB[I][J];
    int matrizC[I][J];

    printf("Digite os valores da matriz A:\n");
    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\n");

    printf("Matriz A:\n");
    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("Digite os valores da matriz B:\n");
    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("\n");

    printf("Matriz B:\n");
    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }
    

    printf("\n");

    printf("Matriz C: C = A + B\n");
    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}