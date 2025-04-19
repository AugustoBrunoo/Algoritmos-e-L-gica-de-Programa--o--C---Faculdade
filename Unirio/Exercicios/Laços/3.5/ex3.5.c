#include <stdio.h>

/*
    Imprima os 20 primeiros múltiplos de 5, desconsiderando o zero.
*/

int main() {
    int contador = 0;
    printf("50 multiplos de 5\n");
    for (int multiplos = 5; contador < 50; multiplos += 5) {
        contador++;
        printf("Posição %d: %d\n", contador, multiplos);
    }
    
    return 0;
}