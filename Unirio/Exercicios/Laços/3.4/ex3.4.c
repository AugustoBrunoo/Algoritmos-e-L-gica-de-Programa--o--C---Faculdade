#include <stdio.h>

/*
    Imprima os 30 primeiros ímpares, não considerando o zero.
*/

int main() {
    int contador = 0;
    printf("Os 30 números ímpares são: \n");
    for (int numerosImpares = 1; contador < 30; numerosImpares += 2){
        contador++;
        printf("Posição %d: %d\n", contador, numerosImpares);
    }
    
    
    return 0;
}