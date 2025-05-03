#include <stdio.h>

/*
    Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. 
    Em seguida, calcule e mostre:

    a) a área do triângulo retângulo que tem A por base e C por altura.
    b) a área do círculo de raio C. (pi = 3.14159)
    c) a área do trapézio que tem A e B por bases e C por altura.
    d) a área do quadrado que tem lado B.
    e) a área do retângulo que tem lados A e B.

    Saída: 
    O arquivo de saída deverá conter 5 linhas de dados. 
    Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente 
    e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos 
    após o ponto decimal.
*/

int main() {
    double a, b, c, areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;

    scanf("%lf %lf %lf", &a, &b, &c);

    areaTriangulo = (a * c) / 2;
    areaCirculo = 3.14159 * (c * c);
    areaTrapezio = ((a + b) * c)/ 2;
    areaQuadrado = b * b;
    areaRetangulo = a * b;

    printf("TRIANGULO: %.3f\n", areaTriangulo);
    printf("CIRCULO: %.3f\n", areaCirculo);
    printf("TRAPEZIO: %.3f\n", areaTrapezio);
    printf("QUADRADO: %.3f\n", areaQuadrado);
    printf("RETANGULO: %.3f\n", areaRetangulo);

    return 0;
}