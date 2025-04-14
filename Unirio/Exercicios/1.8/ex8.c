#include <stdio.h>

/*
    Leia uma temperatura em graus Celsius e converta-a para graus Fahrenheit.
*/

int main() {
    float celsius, conversorTemp;

    printf("Conversor de temperatura!");
    printf("\n");
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    conversorTemp = (celsius * 1.8) + 32;
    printf("\n");
    printf("%.2f graus Celsius = %.2f graus fahrenheit\n", celsius, conversorTemp);

    return 0;
}