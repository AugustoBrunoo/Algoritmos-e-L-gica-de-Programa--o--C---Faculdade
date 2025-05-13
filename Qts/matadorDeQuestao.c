#include <stdio.h>

/*Notas de 100, 50, 20, 10, 5, 2, 1*/

int main() {
    float valor; 
    int qtdDeNotas;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%f", &valor);

    int valorEmInt = (int)valor;
    int valorOriginalEmInt = valorEmInt;

    for (int i = 0; i < 6; i++) {
        qtdDeNotas = valorEmInt / notas[i];
        printf("%d nota(s) de R$ %d.00\n", qtdDeNotas, notas[i]);

        valorEmInt %= notas[i];

    }

    float restante = valor - valorOriginalEmInt;

    printf("Valor restante: R$ %f\n", restante);
    
    return 0;
}