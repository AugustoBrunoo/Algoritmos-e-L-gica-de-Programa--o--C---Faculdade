#include <stdio.h>

/*
    Imprima a tabuada de multiplicação de 1 até 10 de forma tabular.
*/

int main() {
    int calculo;

    // printf("Qual número da tabuada você deseja: ");
    // scanf("%d", &num);

    printf("\n");
    // corpo da tabuada
    for (int i = 1; i <= 10; i++) {
        printf("%4d ", i);
        for (int j = 1; j <= 10; j++) {
            calculo = i * j;
            printf("%4d", calculo);
        }
        printf("\n");
    }
    
    return 0;
}