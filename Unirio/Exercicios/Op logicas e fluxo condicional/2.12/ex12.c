/*
    Complemente o exercício anterior: no caso em que os três lados formam um retângulo, 
    determine o tipo de triângulo (equilátero, isósceles, ou escaleno) e se ele é um triângulo retângulo ou não, 
    e imprima essa informação após a palavra “Triângulo”.
*/

#include <stdio.h>


int main() {
    int ladoA, ladoB, ladoC;

    printf("Digite o lado A: ");
    scanf("%d", &ladoA);
    printf("Digite o lado B: ");
    scanf("%d", &ladoB);
    printf("Digite o lado C: ");
    scanf("%d", &ladoC);

    if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoB + ladoA) {
        printf("É um triângulo ");

        if (ladoA == ladoB && ladoB == ladoC && ladoA == ladoC) {
            printf("Equilátero\n");
        } else if ((ladoA == ladoB && ladoB != ladoC)|| (ladoB == ladoC && ladoB != ladoA)|| (ladoC == ladoA && ladoC!= ladoB)) {
            printf("Isósceles\n");
        } else {
            printf("Escaleno\n");
        }

    } else {
        printf("Não é um triângulo!\n");
    }
    
    return 0;
}