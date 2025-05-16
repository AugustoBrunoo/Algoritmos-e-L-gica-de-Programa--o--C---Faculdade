#include <stdio.h>
#include <math.h>

/*
    Leia um número real x e imprima seu valor arredondado para cima. 
    
    Por exemplo: se x = 3.2, imprimir 3, e se x = 4.9, imprimir 4.
*/

int main() {
    double numero, arredondadoParaCima;

    printf("Digite um número quebrado: ");
    scanf("%lf", &numero);

    arredondadoParaCima = floor(numero);
    printf("\n");
    printf("O valor aproximado de %.2f será %.2f\n", numero, arredondadoParaCima);
    return 0;
}
