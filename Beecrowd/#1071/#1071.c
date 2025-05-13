#include <stdio.h>

/*
    Leia 2 valores inteiros X e Y. 
    A seguir, calcule e mostre a soma dos números impares entre eles.
*/

int main() {
    int x, y, maiorNum, menorNum;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y) {
        maiorNum = x;
        menorNum = y;
    } else {
        maiorNum = y;
        menorNum = x;
    }

    int acumulador = 0;
    for (int i = menorNum + 1; i < maiorNum; i++) {
        if (i % 2 != 0) {
            acumulador += i;
        }
    }
    
    printf("%d\n", acumulador);
    return 0;
}