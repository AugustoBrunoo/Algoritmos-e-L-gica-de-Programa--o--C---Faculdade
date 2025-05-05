#include <stdio.h>

/*
    Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. 
    Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

    Perímetro: XX.X

    Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, 
    mostrando a mensagem

    Area = XX
*/

int main() {
    float a, b, c, perimetroTriangulo, areaTrapezio;

    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        perimetroTriangulo = a + b + c;
        printf("Perimetro = %.1f\n", perimetroTriangulo);
    } else {
        areaTrapezio = (a + b) * c / 2.0;
        printf("Area = %.1f\n", areaTrapezio);
    }

    return 0;
}