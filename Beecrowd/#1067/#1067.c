#include <stdio.h>
/*
    Leia um valor inteiro X (1 <= X <= 1000). 
    Em seguida mostre os ímpares de 1 até X, um valor por linha, 
    inclusive o X, se for o caso.
*/

int main() {
    int num;

    scanf("%d", &num);

    if (num < 1 || num > 1000) {
        return 0;
    }

    for (int i = 1; i <= num; i += 2) {
        printf("%d\n", i);
    }
    
    return 0;
}