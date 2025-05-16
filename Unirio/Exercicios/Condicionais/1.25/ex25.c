#include <stdio.h>

/*
    Leia um número inteiro a com 4 dígitos e calcule e imprima outro número inteiro b
    que deverá ser o número a invertido. Exemplo: se a = 5732, então b = 2375.
    seria tipo um palindromo de um numero

    **
*/

int main()
{
    int numUsuario, ultimoDigito, invertido = 0;
    printf("Digite um número: ");
    scanf("%d", &numUsuario);

    while (numUsuario > 0) {
        ultimoDigito = numUsuario % 10;

        invertido = invertido * 10 + ultimoDigito;

        /*
        Primeiro, pega o 2:
        0 * 10 + 2 = 2

        Depois o 3:
        2 * 10 + 3 = 23

        Depois o 7:
        23 * 10 + 7 = 237

        Depois o 5:
        237 * 10 + 5 = 2375
        */

        numUsuario = numUsuario / 10; // remove o ultimo digito
    }

    printf("Numero Invertido: %d\n", invertido);
    return 0;
}