#include <stdio.h>

/*
Leia o peso e altura de uma pessoa, calcule e imprima seu índice de massa corporal (IMC).

Fórmula:

IMC = Peso (kg) / Altura (m2)
*/

int main() {
    float peso, imc, altura;

    printf("| Calculadora IMC |\n");
    printf("\n");
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("\n");
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    printf("\n");

    printf("Dados gerais: Seu peso: %.2f KG | Sua altura: %.2f cm\n", peso, altura);

    imc = peso / (altura * altura);

    printf("Seu é de IMC: %2.f, o que se encaixa no grupo de: ", imc);
    // Intervalos use and
    if (imc < 18.5) {
        printf("Magreza\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Normal\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Sobrepeso\n");
    } else if(imc >= 30 && imc < 40) {
        printf("Obesidade\n");
    } else {
        printf("Obsidade grave\n");
    }
    return 0;
}