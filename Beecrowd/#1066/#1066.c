#include <stdio.h>

/*
    Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, 
    quantos valores digitados foram ímpares, quantos valores digitados foram positivos e 
    quantos valores digitados foram negativos.
*/

int main() {
    int num, contadorPares = 0, contadorImpares = 0, contadorPositivo = 0, contadorNegativo = 0;
    for (int i = 1; i <= 5; i++) {
        scanf("%d", &num);

        if (num > 0) {
            contadorPositivo++;
        } else if (num < 0 ){
            contadorNegativo++;
        } 

        if (num % 2 == 0) {
            contadorPares++;
        } else {
            contadorImpares++;
        }
    }

    printf("%d valor(es) par(es)\n", contadorPares);
    printf("%d valor(es) impar(es)\n", contadorImpares);
    printf("%d valor(es) positivo(s)\n", contadorPositivo);
    printf("%d valor(es) negativo(s)\n", contadorNegativo);
    return 0;
}