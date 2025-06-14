/*
    Leia uma sequência de 10 números reais e, ao final, imprima todos os números, 
    identificando os números que possuem a maior e a menor parte fracionária. 
    (Caso haja empate para o maior e/ou menor número da sequência, identifique todos os valores empatados.)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPSILON 0.00001

int main() {
    double numeros[10];

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numeros[i]);
    }

    printf("Todos os números: ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");


    double maiorFracionaria = fabs(numeros[0] - (int)numeros[0]);
    double menorFracionaria = fabs(numeros[0] - (int)numeros[0]);
    
    //Ajustando
    for (int i = 0; i < 10; i++) {
        double parteFracionaria = fabs(numeros[i] - (int)numeros[i]);

        if (menorFracionaria > parteFracionaria) {
            menorFracionaria = parteFracionaria;
        }

        if (maiorFracionaria < parteFracionaria) {
            maiorFracionaria = parteFracionaria;
        }
    }

    printf("\n");

    // Maior Num
    printf("Maior número (pelo ponto flutuante): ");
    for (int i = 0; i < 10; i++) {
        double parteFracionaria = fabs(numeros[i] - (int)numeros[i]);

        if (parteFracionaria == maiorFracionaria) {
            printf("%.2f ", numeros[i]);
        }
    }

    printf("\n");

    // Menor num
    printf("Menor número (pelo ponto flutuante): ");
    for (int i = 0; i < 10; i++) {
        double parteFracionaria = fabs(numeros[i] - (int)numeros[i]);

        if (parteFracionaria == menorFracionaria) {
            printf("%.2f ", numeros[i]);
        }
    }
    printf("\n");


    return 0;
}