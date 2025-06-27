#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Leia uma string e substitua as letras maiúsculas que ocorrem nessa string pelas 
    letras minúsculas correspondentes. (Dica: como verificar se um caractere é uma 
    letra maiúscula? Caso seja, como obter a letra minúscula correspondente?)

    Implemente o programa do exercício 5.2 sem utilizar funções da biblioteca ctype.

    Usando a tabela ASCII
    Maíusculas: 65 - 90
    Minúsculas: 97 - 122
    Dígitos: 48 - 57 (0 - 9)

    Não esqueça: 
    minuscula = maiuscula + 32
*/



int main() {

    char palavra[20];

    fgets(palavra, 20, stdin);

    int tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++) {
        char c = palavra[i];

        // printf("%d\n", palavra[i]);

        // Se faz parte das maíusculas

        if (c >= 'A' && c <= 'Z') {
            palavra[i] = c + 32;
        }

        /*
            Ou: 

        if (c >= 65 && c <= 90) {
            palavra[i] = c + 32;
        }
        */
    }
    
    printf("%s", palavra);

    return 0;
}