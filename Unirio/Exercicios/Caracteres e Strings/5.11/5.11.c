#include <stdio.h>
#include <string.h>

/*
    Leia duas strings e construa uma nova string intercalando as duas strings lidas, 
    imprimindo a nova string ao final. 
    
    (Caso uma das strings seja maior do que a outra, 
    inclua os caracteres excedentes da string maior ao final, sem intercalação.)
*/

void retirarN(char *string) {
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

    int tamanhoS1 = strlen(s1);
    int tamanhoS2 = strlen(s2);
    int maiorStr;
    int menorStr;

    if (tamanhoS1 > tamanhoS2) {
        maiorStr = tamanhoS1;
        menorStr = tamanhoS2;
    } else {
        maiorStr = tamanhoS2;
        menorStr = tamanhoS1;
    }

    
    for (int i = 0; i < menorStr; i++) {
        printf("%c%c", s1[i], s2[i]);
    }
    
    if (maiorStr == tamanhoS1) {
        for (int i = menorStr; i < maiorStr; i++) {
            printf("%c", s1[i]);
        }
    } else {
        for (int i = menorStr; i < maiorStr; i++) {
            printf("%c", s2[i]);
        }
    }
    printf("\n");

    return 0;
}