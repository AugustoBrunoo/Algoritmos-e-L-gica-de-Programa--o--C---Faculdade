#include <stdio.h>

/*
    Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. 
    A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. 
    Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
*/

int main() {
    double a, b, c, media;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a < 0 || a > 10 || b < 0 || b > 10 || c < 0 || c > 10) {
        return 1;
    }

    media = (2 * a + 3 * b + 5 * c) / 10;

    printf("MEDIA = %.1f\n", media);
    return 0;
}