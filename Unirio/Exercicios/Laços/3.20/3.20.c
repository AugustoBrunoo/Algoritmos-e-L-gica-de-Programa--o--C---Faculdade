#include <stdio.h>
#include <math.h>
/*
    Leia números inteiros até que o usuário digite zero ou um número negativo.  
    Ao final, imprima a soma e a média aritmética dos números digitados, o menor e o maior número.
*/

int main() {
    float num = 1, acumulador = 0, media = 0, menorNum = 0, maiorNum = 0;

    int i = 1;
    while (num != 0) {
        printf("Digite o número %d: ", i);
        scanf("%f", &num);
        
        if (num < 0) {
            break;
        }

        if (i == 1){
            menorNum = num;
            maiorNum = num;
        } else if (i > 1) {
            if (num > maiorNum) {
                maiorNum = num;
            } else if (num < menorNum && num != 0) {
                menorNum = num;
            }
        }

        acumulador += num;
        i++;
    }

    media = acumulador / i;
    printf("\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Maior número: %.2f\n", maiorNum);
    printf("Menor número: %.2f\n", menorNum);
    printf("Média: %.2f\n", media);
    printf("Acumulador: %.2f\n", acumulador);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    return 0;
}