#include <stdio.h>

// Leia o lado de um cubo, calcule e imprima seu volume.

int main() {
    int ladoCubo;
    printf("Diga um lado do cubo e direi seu volume!\n");
    printf("\n");
    printf("Digite o lado do cubo: ");
    scanf("%d", &ladoCubo);
    printf("\n");
    
    int volumeCubo = ladoCubo * ladoCubo * ladoCubo;

    printf("O volume de um cubo com um lado de tamanho %d é de %d\n", ladoCubo, volumeCubo);
    return 0;
}