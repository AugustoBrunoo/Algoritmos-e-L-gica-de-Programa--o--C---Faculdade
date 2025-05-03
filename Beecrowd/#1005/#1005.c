#include <stdio.h>

/*
    Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. 
    A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 
    (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

    Saída: 
    Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 5 dígitos após o ponto decimal 
    e com um espaço em branco antes e depois da igualdade. Utilize variáveis de dupla precisão (double) 
    e como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, 
    caso contrário, você receberá "Presentation Error".
*/

int main() {
    double a, b, media;

    scanf("%lf", &a);
    scanf("%lf", &b);

    if (a > 10 || a < 0 || b > 10 || b < 0) {
        return 1;
    }

    media = (3.5 * a + 7.5 * b) / 11;

    printf("MEDIA = %.5f\n", media);
    return 0;
}