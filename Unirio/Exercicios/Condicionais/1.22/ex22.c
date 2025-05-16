#include <stdio.h>
#include <math.h>

/*
    Leia um número real x e imprima seu valor arredondado para o lado mais próximo. 
    Por exemplo: se x = 3.2, imprimir 3, e se x = 4.9, imprimir 5.
    método round();

*/

int main() {
    double numAprox, num;

    printf("Digite um número aproximado: ");
    scanf("%lf", &num);

    numAprox = round(num);

    printf("O número %.2f, é mais próximo de %.2f\n", num, numAprox);
    return 0;
}