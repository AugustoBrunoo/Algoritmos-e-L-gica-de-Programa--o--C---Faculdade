#include <stdio.h>

/*
    Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos 
    (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

    Entrada: 
    Seis valores, negativos e/ou positivos.

    Saída: 
    Imprima uma mensagem dizendo quantos valores positivos foram lidos.
*/

int main() {
    float num; 
    int contador =0;
    for (int i = 1; i <= 6; i++) {
        scanf("%f", &num);

        if (num > 0) {
            contador++;
        }
    }

    printf("%d valores positivos\n", contador);
    
    return 0;
}