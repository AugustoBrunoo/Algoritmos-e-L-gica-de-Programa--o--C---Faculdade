#include <stdio.h>

// Leia a base e a altura de um triângulo, calcule e imprima sua área.

int main()
{
    int base, altura = 0;
    printf("Área de um triângulo!\n");
    printf("\n");
    printf("Digite a base e altura do triangulo:\n");

    printf("Base do triângulo: ");
    scanf("%d", &base);
    printf("\n");

    printf("Altura do triângulo: ");
    scanf("%d", &altura);
    printf("\n");

    int calculoArea;

    calculoArea = (base * altura) / 2;

    printf("O valor da área do triângulo é: %d\n", calculoArea);
    return 0;
}