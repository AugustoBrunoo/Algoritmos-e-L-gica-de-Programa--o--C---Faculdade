#include <stdio.h>

/*Notas de 100, 50, 20, 10, 5, 2, 1*/

int main() {
    float valor; 
    int qtdDeNotas;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int moedas[6] = {100, 50, 25, 10, 5, 1};


    scanf("%f", &valor);

    int valorEmInt = (int)valor;
    int valorOriginalEmInt = valorEmInt;
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        qtdDeNotas = valorEmInt / notas[i];
        printf("%d nota(s) de R$ %d.00\n", qtdDeNotas, notas[i]);

        valorEmInt %= notas[i];

    }

    float restante = valor - valorOriginalEmInt;

    int centavos = (int)(restante * 100 + 0.5);

    printf("MOEDAS:\n");
    int quantidadeDeCentavos;
    for (int i = 0; i < 6; i++) {
        
        quantidadeDeCentavos = centavos / moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", quantidadeDeCentavos, moedas[i] / 100.0);
        centavos %= moedas[i];
    }
    

    printf("Valor restante: R$ %d\n", centavos);
    
    return 0;
}