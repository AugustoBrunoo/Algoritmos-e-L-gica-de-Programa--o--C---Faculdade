/*
    Leia uma matriz A de 3x4 números inteiros e uma matriz B de 4x5 números inteiros, 
    e construa a matriz 3x5 C = A x B.
*/

#include <stdio.h>


void registraMatrizes(int mA[3][4], int mB[4][5]) {
    printf("Digite os valores da matriz A (3x4):\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &mA[i][j]);
        }
    }
    printf("\n");

    printf("matriz A (3x4):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", mA[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    printf("Digite os valores da matriz B (4x5):\n");
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &mB[i][j]);
        }
    }
    
    printf("\n");

    printf("matriz B (4x5):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", mB[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

}

void calcularMatrizes(int mA[3][4], int mB[4][5], int mC[3][5]) {

        
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            mC[i][j] = 0;
            for (int k = 0; k < 4; k++) { // 4 linhas de A e 4 colunas de B
                mC[i][j] += mA[i][k] * mB[k][j];
            }
            
        }
        
    }
    
    printf("\n");

    printf("Matriz C: (3x5)\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", mC[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int matrizA[3][4];
    int matrizB[4][5];
    int matrizC[3][5];

    registraMatrizes(matrizA, matrizB);

    calcularMatrizes(matrizA, matrizB, matrizC);

    
    
    return 0;
}