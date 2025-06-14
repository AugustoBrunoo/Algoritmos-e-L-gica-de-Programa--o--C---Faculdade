/*
    Leia duas sequências de 10 números reais e, interpretando cada uma destas sequências como sendo um vetor 
    (como em Álgebra Linear) de dimensão 10, calcule o produto escalar entre os dois vetores.
*/
#include <stdio.h>

int main() {
    float sequencia1[10];
    float sequencia2[10];

    for (int i = 0; i < 10; i++) {
        scanf("%f %f", &sequencia1[i], &sequencia2[i]);
    }

    float acumulador = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("%.0f x %.0f = %.0f\n", sequencia1[i], sequencia2[i], sequencia1[i] * sequencia2[i]);
        acumulador += sequencia1[i] * sequencia2[i];
    }
    printf("\n");
    printf("Cálculo do produto escalar: %.0f\n", acumulador);

    return 0;
}