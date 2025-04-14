#include <stdio.h>

/*
Leia 3 notas de um aluno e seus respectivos pesos.  
Depois, calcule e imprima a média ponderada do aluno.
*/

int main() {
    float nota1, nota2, nota3;
    float peso1, peso2, peso3, calculo;

    printf("Calculadora de Média Ponderada\n");
    printf("\n");
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("\n");
    printf("Digite o peso da nota 1: ");
    scanf("%f", &peso1);
    printf("\n");
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    printf("\n");
    printf("Digite o peso da nota 2: ");
    scanf("%f", &peso2);
    printf("\n");
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);
    printf("\n");
    printf("Digite o peso da sua terceira nota: ");
    scanf("%f", &peso3);
    printf("-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-\n");

    calculo = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
    
    printf("\n");
    printf("A sua média ponderada ficou em: %.2f\n", calculo);
    return 0;
}