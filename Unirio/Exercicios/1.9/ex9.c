#include <stdio.h>

/*
    Leia o raio de uma esfera, calcule e imprima seu volume.
*/

int main() {
    float raio, volume;
    printf("Calculador de Volume de Esfera\n");
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    printf("\n");

    volume = (4.0/3.0) * 3.14 * (raio * raio * raio);
    printf("A esfera de raio %.2f é %.2f unidades cúbicas\n", raio, volume);
    // pow(raio,3);

    return 0;
}