#include <stdio.h>

int main() {
    int matrizes[3][3];

    matrizes[0][0] = 1;
    matrizes[0][1] = 2;
    matrizes[0][2] = 3;

    matrizes[1][0] = 4;
    matrizes[1][1] = 5;
    matrizes[1][2] = 6;

    matrizes[2][0] = 7;
    matrizes[2][1] = 8;
    matrizes[2][2] = 9;

    // Matriz 3x3 = 9 elementos
    printf("Imprimindo a primeira lista:\n");
    printf("%d %d %d\n", matrizes[0][0], matrizes[0][1], matrizes[0][2]);
    printf("%d %d %d\n", matrizes[1][0], matrizes[1][1], matrizes[1][2]);
    printf("%d %d %d\n", matrizes[2][0], matrizes[2][1], matrizes[2][2]);

    return 0;
}