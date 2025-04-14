#include <stdio.h>

/*

Leia a quantidade de bytes de um arquivo e a velocidade de transmissão em bytes por segundo 
e imprima quantos segundos serão necessários para fazer o download do arquivo.

*/

int main() {
    float byte, velocidade, calculoSeg;

    printf("Quantidade de bytes/segundos\n");
    printf("\n");
    printf("Digite a quantidade de bytes do arquivo: ");
    scanf("%f", &byte);
    printf("\n");
    printf("Digite a velocidade transmissão (Byte/Segundo): ");
    scanf("%f", &velocidade);

    if (velocidade <= 0) {
        printf("Erro: A velocidade deve ser maior que zero.\n");
        return 1;
    }

    calculoSeg = byte / velocidade;

    printf("Serão necessários %.1f segundos para carregar um arquivo de %.2f Bytes.\n", calculoSeg, byte);

    return 0;
}

