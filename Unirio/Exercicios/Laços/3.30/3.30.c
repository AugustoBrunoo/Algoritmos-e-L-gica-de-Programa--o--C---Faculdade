#include <stdio.h>

/*
    Leia um número n positivo e imprima um triângulo de asteriscos com base n. Por exemplo, se n = 4, imprima:

    *
    * *
    * * *
    * * * *

*/

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Apenas números positivos\n");
        return 1;
    }
    printf("\n");
    
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
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