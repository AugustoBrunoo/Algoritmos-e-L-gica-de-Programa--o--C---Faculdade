#include <stdio.h>

/*
    Percorra os números de 1000 a 1999 e imprima aqueles que, quando divididos por 11 dão resto igual a 5.
*/

int main() {
    printf("Números escolhidos: ");
    for (int numEscolhido = 1000; numEscolhido <= 1999; numEscolhido++) {
        if (numEscolhido % 11 == 5) {
            printf("%d - ", numEscolhido);
        }
    }
    printf("Fim\n");
    return 0;
}