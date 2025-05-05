#include <stdio.h>

/*
    Leia 3 valores inteiros e ordene-os em ordem crescente. No final, 
    mostre os valores em ordem crescente, uma linha em branco e em seguida, 
    os valores na sequência como foram lidos.
*/

int main() {
    int num1, num2, num3, maiorNumero, menorNumero, numeroMeio;

    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        maiorNumero = num1;

        if (num2 >= num3) {
            numeroMeio = num2;
            menorNumero = num3;
        } else {
            numeroMeio = num3;
            menorNumero = num2;
        }

    } else if (num2 > num1 && num2 > num3) {
        maiorNumero = num2;

        if (num1 >= num3) {
            numeroMeio = num1;
            menorNumero = num3;
        } else {
            numeroMeio = num3;
            menorNumero = num1;
        }


    } else if (num3 > num2 && num3 > num1) {
        maiorNumero = num3;

        if (num2 >= num1) {
            numeroMeio = num2;
            menorNumero = num1;
        } else {
            numeroMeio = num1;
            menorNumero = num2;
        }
    } else {
        menorNumero = num1;
        numeroMeio = num2;
        maiorNumero = num3;
    }

    printf("%d\n", menorNumero);
    printf("%d\n", numeroMeio);
    printf("%d\n", maiorNumero);
    printf("\n");
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    return 0;
}