#include <stdio.h>

/*
    Leia um número n positivo e imprima um quadrado n x n de asteriscos. Por exemplo, se n = 3, imprima:
    * * *
    * * *
    * * *
*/

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("O número deve ser positivo!\n");
        return 0;
    }

    printf("\n");

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++){
            if (j == num) {
                printf("*");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
    
    return 0;
}