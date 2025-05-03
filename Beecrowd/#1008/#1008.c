#include <stdio.h>

/*
    Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, 
    o valor que recebe por hora e calcula o salário desse funcionário. 
    A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

    Entrada: 
    O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, 
    representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, 
    respectivamente.
*/

int main() {
    int numTrabalhador, horasTrabalhadas;
    float valorPorHora, calculo;

    scanf("%d", &numTrabalhador);
    scanf("%d", &horasTrabalhadas);
    scanf("%f", &valorPorHora);

    calculo = horasTrabalhadas * valorPorHora;

    printf("NUMBER = %d\n", numTrabalhador);
    printf("SALARY = U$ %.2f\n", calculo);
    return 0;
}