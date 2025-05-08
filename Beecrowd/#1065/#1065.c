#include <stdio.h>

/*
    Faça um programa que leia 5 valores inteiros. 
    Conte quantos destes valores digitados são pares e mostre esta informação.
*/

int main() {
    int num, contador = 0;
    
    for (int i = 1; i <= 5; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            contador++;
        }
    }
    
    printf("%d valores pares\n", contador);
    return 0;
}