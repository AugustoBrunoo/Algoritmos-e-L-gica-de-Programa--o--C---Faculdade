/*
    Alguns triângulos têm lados com comprimento inteiro. Por exemplo, nossos livros de Ensino Médio 
    sempre ilustram o Teorema de Pitágoras com um triângulo de lados 3, 4 e 5 (como essa à direita). 

    Porém, nem toda combinação de três inteiros pode formar um triângulo. 
    Por exemplo, é impossível formar um triângulo com lados de comprimento 2, 4, e 8.

    Leia três números inteiros e determine se eles formam um triângulo, e imprima “Triângulo” ou “Não triângulo” 
    conforme o caso.

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
        printf("É um triângulo\n");
    } else {
        printf("Não é um triângulo!\n");
    }
    
    return 0;
}