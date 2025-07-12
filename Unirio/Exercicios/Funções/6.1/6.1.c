#include <stdio.h>
#include <stdlib.h>

// Quando você passa int, float e char sem ser ponteiro, ele faz uma cópia do valor que você passou por parametro
// ele só altera se for ponteiro.
int digitos(int numEscolhido) {
    int digitos = 0;
    while (numEscolhido > 0) {
        numEscolhido = numEscolhido / 10;
        digitos++;
    }
    
    return digitos;
}

int main() {
    int numEscolhido;

    scanf("%d", &numEscolhido);

    int quantidade = digitos(numEscolhido);

    if (quantidade == 1) {
        printf("O número %d só tem %d dígito.\n", numEscolhido, quantidade);
    } else {
        printf("O número %d tem %d dígitos.\n", numEscolhido, quantidade);
    }


    return 0;
}