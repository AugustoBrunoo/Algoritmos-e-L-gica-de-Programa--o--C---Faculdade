#include <stdio.h>

/*
    Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, 
    de modo que o lado A representa o maior dos 3 lados. 
    
    A seguir, determine o tipo de 
    triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

    * se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    * se A^2 = B^2 + C^2, apresente a mensagem: TRIANGULO RETANGULO
    * se A^2 > B^2 + C^2, apresente a mensagem: TRIANGULO OBTUSANGULO
    * se A^2 < B^2 + C^2, apresente a mensagem: TRIANGULO ACUTANGULO
    
    * se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    * se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
*/

int main() {
    float a, b, c, num1, num2, num3;

    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        a = num1;

        if (num2 >= num3) {
            b = num2;
            c = num3;
        } else {
            b = num3;
            c = num2;
        }

    } else if (num2 >= num1 && num2 >= num3) {

        a = num2;

        if (num1 >= num3) {
            b = num1;
            c = num3;
        } else {
            b = num3;
            c = num1;
        }
    } else {

        a = num3;

        if (num1 >= num2) {
            b = num1;
            c = num2; 
        } else {
            b = num2;
            c = num1;
        }
    }

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (a * a == b * b + c * c) {
            printf("TRIANGULO RETANGULO\n");
        } else if (a * a > b * b + c * c) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else {
            printf("TRIANGULO ACUTANGULO\n");
        }
        
        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || b == c || a == c) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}