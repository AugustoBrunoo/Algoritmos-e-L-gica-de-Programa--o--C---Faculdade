#include <stdio.h>

/*
    Leia um valor inteiro X. Em seguida apresente 
    os 6 valores ímpares consecutivos a partir de X, 
    um valor por linha, inclusive o X ser for o caso.
*/

int main() {
    int num;

    scanf("%d", &num);

    if (num % 2 == 0) {
        num++;
    }
    
    printf("%d\n", num);

    for (int i = 1; i < 6; i++) {
        printf("%d\n", num += 2);
    }
    
    return 0;
}