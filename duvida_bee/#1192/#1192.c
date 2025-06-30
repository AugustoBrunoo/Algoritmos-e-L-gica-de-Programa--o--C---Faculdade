#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
    A, B
    Se a letra for maiúscula, deve-se subtrair o primeiro dígito do segundo. (B - A)
    Se a letra for minúscula, deve-se somar ambos os dígitos (A + B)
    se os DÍGITOS forem iguais, deve-se desconsiderar a letra e mostrar o produto entre os dois dígitos (A * B)
*/


int main() {
    int seq;
    char codigo[4];

    scanf("%d", &seq);
    int n1 = 0, n2 = 0;

    for (int i = 0; i < seq; i++) {
        scanf("%s", codigo);

        if (codigo[0] == codigo[2]) {
            // Tabela ASCII:
            //Método atoi() ascii to integer = transforma diretamente uma str em inteiro
            // ou dessa maneira - '0' mostra o valor dele em inteiro

            n1 = codigo[0] - '0';
            n2 = codigo[2] - '0';

            printf("%d\n", n1 * n2);
        } else if (codigo[0] != codigo[2] && islower(codigo[1])) {
            n1 = codigo[0] - '0';
            n2 = codigo[2] - '0';
            int resultado = n1 + n2;

            printf("%d\n", resultado);
        } else if (codigo[0] != codigo[2] && isupper(codigo[1])) {
            n1 = codigo[0] - '0';
            n2 = codigo[2] - '0';
            int resultado = n2 - n1;

            printf("%d\n", resultado);
        }
    }

    
    return 0;
}