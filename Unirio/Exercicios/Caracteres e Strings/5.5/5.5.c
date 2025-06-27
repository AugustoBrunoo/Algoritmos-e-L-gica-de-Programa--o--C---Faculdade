#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
    Uma substring é um sequência de caracteres 
    consecutivos que aparece como parte de uma string. 

    Leia uma string e dois índices i e j, e imprima a substring 
    compreendida entre os índices i e j (considere caracteres indexados 
    a partir de 0).
*/
int main() {
    char palavra[20];

    int i;
    int j;

    fgets(palavra, 20, stdin);

    int tamanho = strlen(palavra);

    if (palavra[tamanho - 1] == '\n') {
        palavra[tamanho - 1] = '\0';
        tamanho--;
    }

    scanf("%d", &i);
    scanf("%d", &j);

    if (i >= 0 && j < tamanho && i <= j) {
        for (int k = i; k <= j; k++) {
            printf("%c", palavra[k]);
        }
    } else {
        printf("Dados inválidos\n");
    }

    printf("\n");

    return 0;
}