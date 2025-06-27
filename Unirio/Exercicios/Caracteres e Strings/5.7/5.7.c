#include <stdio.h>
#include <string.h>

// Leia uma linha de texto, construa uma string a partir desta linha de texto 
// removendo todos os espaços em branco supérfluos, e imprima a string resultante.

int main() {
    char frase[100];

    fgets(frase, sizeof(frase), stdin);

    int tamanho = strlen(frase);
    char fraseFormatada[tamanho];

    if (frase[tamanho - 1] == '\n') {
        frase[tamanho - 1] = '\0';
        tamanho--;
    }

    int j = 0;

    for (int i = 0; i < tamanho; i++) {
        if (frase[i] == ' ') {
            continue;
        } else {
            fraseFormatada[j] = frase[i];
            j++;
        }
    }

    fraseFormatada[j] = '\0';
    
    printf("%s\n", fraseFormatada);
    
    return 0;
}