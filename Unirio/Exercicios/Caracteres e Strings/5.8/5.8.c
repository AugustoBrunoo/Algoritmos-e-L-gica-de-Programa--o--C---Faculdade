#include <stdio.h>
#include <string.h>

/*
    Leia uma string e um caractere, construa uma nova string 
    removendo da string lida todas as ocorrências do caractere lido, 
    e imprima a string resultante.
*/

int main() {

    char string[100];
    char caractere;

    fgets(string, sizeof(string), stdin);

    int tamanho = strlen(string);

    if (string[tamanho - 1] == '\n') {
        string[tamanho - 1] = '\0';
        tamanho--;
    }

    scanf("%c", &caractere);

    int j = 0;
    char stringNova[tamanho];

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            continue;
        } else {
            stringNova[j] = string[i];
            j++;
        }
    }

    stringNova[j] = '\0';

    printf("%s\n", stringNova);

    return 0;
}

