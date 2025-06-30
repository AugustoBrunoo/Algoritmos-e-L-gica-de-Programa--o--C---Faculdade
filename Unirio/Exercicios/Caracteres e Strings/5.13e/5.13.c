#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
    Um palíndromo é uma palavra que permanece igual quando lida ao contrário. 
    Por exemplo, as palavras osso, arara, e anilina são palíndromos. 
    Leia uma palavra, composta apenas de letras minúsculas, 
    e determine se ela é um palíndromo.

*/

void retirarN(char *string) {
    int tamanho = strlen(string);

    if (tamanho > 0 && string[tamanho - 1] == '\n') {
        string[tamanho - 1] = '\0';
        tamanho--;
    }
}

void transformarEmMinuscula(char *string) {
    int tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++) {
        if (isupper(string[i])) {
            string[i] = tolower(string[i]);
        }
    }
}

int main() {
    char palavra[50];

    fgets(palavra, sizeof(palavra), stdin);
    retirarN(palavra);

    transformarEmMinuscula(palavra);

    int tamanho = strlen(palavra);
    char invertida[50];

    int j = 0;
    for (int i = tamanho - 1; i >= 0; i++) {
        invertida[j] = palavra[i];
        j++;
    }

    invertida[j] = '\0';

    if (strcmp(palavra, invertida) == 0) {
        printf("é um palíndromo\n");
    } else {
        printf("não é um palíndromo\n");
    }

    /* 
    int sequenciaIguais = 0;

    for (int i = 0; i < tamanho; i++) {
        if (invertida[i] == palavra[i]) {
            sequenciaIguais++;
        }
    }

    
    if (sequenciaIguais == tamanho) {
        printf("É um palíndromo\n");
    } else {
        printf("Não é um palíndromo\n");
    }
    */


    return 0;
}