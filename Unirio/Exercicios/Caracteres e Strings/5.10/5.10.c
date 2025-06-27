#include <stdio.h>
#include <string.h>

/*
    Leia duas strings e, sem utilizar o comando strcat, 
    construa uma nova string concatenando as duas strings lidas, 
    imprimindo a nova string ao final.

    deve usar * ponteiro para acessar uma string
*/

void retirarN (char *string) {
    int tamanho = strlen(string);

    if (string[tamanho - 1] == '\n') {
        string[tamanho - 1] = '\0';
        tamanho--;
    }
}

int main() {
    char s1[50];
    char s2[50];

    fgets(s1, sizeof(s1), stdin);

    retirarN(s1);

    fgets(s2, sizeof(s2), stdin);

    retirarN(s2);

    int tamanhoStr1 = strlen(s1);
    int tamanhoStr2 = strlen(s2);

    for (int i = 0; i < tamanhoStr1; i++) {
        printf("%c", s1[i]);
    }

    for (int i = 0; i < tamanhoStr2; i++) {
        printf("%c", s2[i]);
    }

    printf("\n");
    
    return 0;
}