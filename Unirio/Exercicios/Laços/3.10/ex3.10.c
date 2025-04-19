#include <stdio.h>

/*
    Imprima uma tabela de conversão de polegadas para centímetros. 

    1 polegada = 2,54 cm

    Cada linha da tabela deve constar um valor inteiro para polegadas, de 1 até 20, e 
    o valor correspondente em centímetros.
*/

int main() {
    for (int polegada = 1; polegada <= 20; polegada++) {
        if (polegada == 20) {
            printf(" -------------------------------- \n");
            printf("| %d Polegada(s) | %.2f Centímetros |\n", polegada, polegada * 2.54);
            printf(" -------------------------------- \n");
        } else {
            printf(" -------------------------------- \n");
            printf("| %d Polegada(s) | %.2f Centímetros |\n", polegada, polegada * 2.54);
        }
    }
    

    return 0;
}