#include <stdio.h>

/*
    Imprima os 50 primeiros números pares, não considerando o zero.
*/

int main() {
    int numerosPares = 0;
    int numeros = 1;

    printf("Os 50 primeiros números pares: (Excluindo o zero)\n");
    while (numerosPares < 50) {
        if (numeros % 2 == 0) {
            numerosPares++; 
            printf("Posição %d: %d\n", numerosPares ,numeros);
        }
        numeros++;
    }
    
    
    
    return 0;
}