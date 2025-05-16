#include <stdio.h>

/*
    Leia uma sequência de 10 números inteiros e, ao final, imprima os números pares, 
    na mesma ordem fornecida, seguidos dos números ímpares, na ordem contrária à fornecida.
*/
int main() {
    int sequencia[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &sequencia[i]);
    }

    for (int j = 0; j < 10; j++) {
        if (sequencia[j] % 2 == 0) {
            printf("%d ", sequencia[j]);
        }
    }
    
    for (int k = 9; k >= 0; k--) {
        if (sequencia[k] % 2 != 0) {
            printf("%d ", sequencia[k]);
        }
    }

    printf("\n");

    return 0;
}