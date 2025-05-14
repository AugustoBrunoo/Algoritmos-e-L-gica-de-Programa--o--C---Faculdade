#include <stdio.h>

int main() {
    double valor; 
    int qtdDeNotas;
    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};


    scanf("%lf", &valor);

    int totalCentavos = (int)(valor * 100 + 0.5);
    int reais = totalCentavos / 100;
    int centavos = totalCentavos % 100;


    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        qtdDeNotas = reais / notas[i];
        printf("%d nota(s) de R$ %d.00\n", qtdDeNotas, notas[i]);

        reais %= notas[i];

    }

    centavos += reais * 100;

    printf("MOEDAS:\n");
    int quantidadeDeCentavos;
    for (int i = 0; i < 6; i++) {

        quantidadeDeCentavos = centavos / moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", quantidadeDeCentavos, moedas[i] / 100.0);
        centavos %= moedas[i];
    }
        
    return 0;
}