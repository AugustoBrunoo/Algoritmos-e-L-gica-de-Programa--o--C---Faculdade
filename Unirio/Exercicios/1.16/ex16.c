#include <stdio.h>

/*
    Calcule a raiz de uma equação do 1º grau ax + b = 0, 
    lendo os valores dos coeficientes a e b e imprimindo o valor de x. 
    
    Considere a ≠ 0.
*/

int main() {
    float a, b, x;
    printf("Programa - Equação do 1 Grau!\n");
    printf("-----------------------------\n");
    printf("** a tem que ser diferente de 0!!!\n");
    printf("Digite o valor do coeficiente a: ");
    scanf("%f", &a);

    if (a == 0) {
        printf("O a deve ser diferente de 0. Tente novamente!\n");
        return 1;
    }

    printf("Digite o valor do coef b: ");
    scanf("%f", &b);
    printf("----------------------------\n");
    x = (-b) / a;
    printf("O valor de X será %.2f\n", x);

    return 0;
}