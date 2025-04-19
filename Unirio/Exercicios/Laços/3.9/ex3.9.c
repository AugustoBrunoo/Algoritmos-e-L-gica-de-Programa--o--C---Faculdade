#include <stdio.h>

/*
    Leia 10 valores, um de cada vez, e conte quantos estão no intervalo [10, 20] e quantos estão fora do intervalo. 
    Ao final, imprima estas informações.

*/

int main() {
    int numero, contadorDentro = 0, contadorFora = 0;
    
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &numero);

        if (numero >= 10 && numero <= 20) {
            contadorDentro++;
        } else {
            contadorFora++;
        }
    }

    printf("Existe %d números dentro do intervalo de [10, 20].\n", contadorDentro);
    printf("Existe %d números fora do intervalo.\n", contadorFora);
    
    return 0;
}