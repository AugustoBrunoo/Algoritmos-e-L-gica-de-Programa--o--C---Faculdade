#include <stdio.h>
#include <string.h>

/*
    Leia uma linha de texto e imprima quantas palavras essa linha de texto possui. 
    Considere que qualquer sequência de 1 ou mais caracteres, 
    
    exceto o caracter 
    “espaço”, delimitados pelo início e/ou fim da string e/ou separados dos 
    demais por 1 ou mais espaços em branco.

*/

int main() {
    char palavra[20];
    int quantidadeDePalavras = 0;

    fgets(palavra, 20, stdin);

    int tamanho = strlen(palavra);

    if (palavra[tamanho - 1] == '\n') {
        palavra[tamanho - 1] = '\0';
        tamanho--;
    }

    for (int i = 0; i < tamanho; i++) {
        if (palavra[i] == ' ') {
            continue;
        } else {
            quantidadeDePalavras++;
        }
    }
    
    printf("A quantidade de palavras é: %d\n", quantidadeDePalavras);
    return 0;
}