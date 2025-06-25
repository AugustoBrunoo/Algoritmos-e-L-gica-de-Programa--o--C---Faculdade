#include <stdio.h>

// Exercício 2721

//Dasher, Dancer, Prancer, Vixen, Comet, Cupid, Donner, Blitzen e Rudolph. 

int main() {
    int vetorBolas[9];
    int acumuladorDeBolas = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &vetorBolas[i]);

        acumuladorDeBolas += vetorBolas[i];
    }

    // Lista de nomes em ordem
    const char* renas[] = {
        "Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"
    };

    int indiceVencedor = (acumuladorDeBolas - 1) % 9;
    
    printf("%s\n", renas[indiceVencedor]);

    return 0;
}