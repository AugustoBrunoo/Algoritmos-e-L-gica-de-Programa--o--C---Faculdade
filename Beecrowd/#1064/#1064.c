#include <stdio.h>

/*
    Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos.

    Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, 
    com um dígito após o ponto decimal.
*/
int main() {
    int contador = 0;
    float acumulador = 0, num;

    for (int i = 1; i <= 6; i++) {
        scanf("%f", &num);

        if (num > 0) {
            contador++; 
            acumulador += num;
        }
    }

    printf("%d valores positivos\n", contador);
    printf("%.1f\n", acumulador / contador);
    return 0;
}