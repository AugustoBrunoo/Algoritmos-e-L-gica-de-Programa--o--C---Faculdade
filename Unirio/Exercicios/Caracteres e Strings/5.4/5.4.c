#include <stdio.h>
#include <string.h>

/*
    Leia uma string e um caracter, e imprima todas as posições em que o caracter aparece na string, 
    ou o valor -1 caso o caracter não apareça na string.

    strcasecmp (ou stricmp no Windows) é uma versão de strcmp que ignora maiúsculas e minúsculas.

*/

int main() {
    char palavra[20];
    char caracter;

    fgets(palavra, 20, stdin);

    int tamanho = strlen(palavra);
    int achou = 0;

    if(palavra[tamanho - 1] == '\n') {
        palavra[tamanho - 1] = '\0';
        tamanho--; // remove o \n que o fgets coloca
    }

    scanf(" %c", &caracter);

    for (int i = 0; i < tamanho; i++) {
        if (palavra[i] == caracter) {
            printf("Aparece na posicao: %d\n", i + 1);
            achou = 1;
        }
    }

    if (!achou) {
        printf("-1\n");
    }
    

    return 0;
}