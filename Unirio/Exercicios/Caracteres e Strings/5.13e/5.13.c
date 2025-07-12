#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
    Um palíndromo é uma palavra que permanece igual quando lida ao contrário. 
    Por exemplo, as palavras osso, arara, e anilina são palíndromos. 
    Leia uma palavra, composta apenas de letras minúsculas, 
    e determine se ela é um palíndromo.

*/

void verificarUpper(char *string, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (islower(string[i])) {
            string[i] = toupper(string[i]);
        }
    }
    
    // for (int i = 0; i < tamanho; i++) {
    //     printf("%c", string[i]);
    // }
    // printf("\n");
}

void retirarN(char *string) {
    int tamanho = strlen(string);
    
    if (string[tamanho - 1] == '\n') {
        string[tamanho - 1] = '\0';
        tamanho--;
    }

    verificarUpper(string, tamanho);
}

int manipularString(char *string) {
    int tamanho = strlen(string);

    char palavraInvertida[tamanho + 1];

    /*Injetando os caracteres ao contrario*/
    int j = tamanho - 1;
    for (int i = 0; i < tamanho; i++) {
        palavraInvertida[i] = string[j];
        j--;
    }
    palavraInvertida[tamanho] = '\0';

    // printf("%s\n", palavraInvertida);

    int contador = 0;
    for (int k = 0; k < tamanho; k++) {
        if (string[k] == palavraInvertida[k]) {
            contador++;
        }
    }
    
    if (contador == tamanho) {
        return 1;
    } else {
        return 0;
    }
}


int main() {
    char palavra[20];
    fgets(palavra, sizeof(palavra), stdin);

    retirarN(palavra);

    int resultado = manipularString(palavra);

    if (resultado == 1) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo!\n");
    }
    
    return 0;
}