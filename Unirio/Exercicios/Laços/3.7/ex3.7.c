#include <stdio.h>

/*
    Leia 10 valores, um de cada vez, e conte quantos deles são divisíveis por 3 ou 5, mas não são pares. 
    Ao final, imprima essa quantidade.
*/

int main() {
    int valor = 0, contador = 0;
    printf("Digite 10 valores: \n");

    for (int i = 1; i <= 10; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        if ((valor % 3 == 0 || valor % 5 == 0) && valor % 2 != 0) {
            contador++;
        }
    }

    printf("Há %d divisíveis por 3 ou 5, mas não são pares.\n", contador);
    return 0;
}