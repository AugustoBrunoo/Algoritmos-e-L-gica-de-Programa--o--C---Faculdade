#include <stdio.h>

/*
    Um cilindro precisa ser enchido de água para um espetáculo de mágica. 
    Leia o raio e altura do cilindro, calcule e imprima seu volume.

    V = pi * r * r * h
    pi = 3.1459
*/

int main() {
    float raio, altura, volume;

    printf("Calculadora de Volume de Cilindro\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    printf("\n");
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = 3.1459 * (raio * raio) * altura;

    printf("O volume do cilindro de raio: %.2f e altura: %.2f é %.2f\n", raio, altura, volume);

    return 0;
}