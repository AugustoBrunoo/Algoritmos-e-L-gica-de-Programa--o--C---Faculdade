#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Leia uma string e, sem utilizar o comando strlen, imprima a quantidade de caracteres desta string.

    char nome[20];

    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);

    int i = 0;

    while (nome[i] != '\0') {
        i++;
    }

    // remove o espaço como caracter que o fgets pode colocar
    // Veja como funciona: 
    // 'J' [0] + 'o'[1] + 'a'[2] + 'o'[3] + '\n'[4] + '\0'
    
    if (nome[i - 1] == '\n') {
        i--;
    }

    printf("Há %d caracteres.\n", i);
    
    return 0;
}