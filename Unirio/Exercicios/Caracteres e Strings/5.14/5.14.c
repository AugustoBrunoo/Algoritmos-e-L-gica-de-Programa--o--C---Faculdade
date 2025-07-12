#include <stdio.h>
#include <string.h>
#include <ctype.h>

void retirarN(char *str, int tamanho) {
    if (str[tamanho - 1] == '\n') {
        str[tamanho - 1] = '\0';
        tamanho--;
    }
    
}

void manipulacaoStr(char *str) {
    retirarN(str, strlen(str));
    
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        char digito = str[i];

        if (isupper(digito)) {
            str[i] = tolower(str[i]);
        }
    }
}

void retirarEspacos (char *strAntiga, char *novaStr) {
    int tamanho = strlen(strAntiga);

    int j = 0;
    for (int i = 0; i < tamanho; i++) {
        char digito = strAntiga[i];

        if (isalpha(digito)) {
            novaStr[j] = strAntiga[i];
            j++;
        }

        novaStr[j] = '\0';
    }
    
}

int inversaoDeString (char *str) {
    int tamanho = strlen(str);

    char inversao[tamanho];
    int j = 0;

    for (int i = tamanho - 1; i >= 0; i--) {
        inversao[j] = str[i];
        j++;
    }

    inversao[j] = '\0';
    
    int cont = 0;

    for (int i = 0; i < tamanho; i++) {
        
        if (str[i] == inversao[i]) {
            cont++;
        }
    }
    
    if (cont == tamanho) {
        return 1;
    } else {
        return 0;
    }

}

int main() {
    char palavraDigitada[30];
    char palavraModificada[30];

    fgets(palavraDigitada, sizeof(palavraDigitada), stdin);

    manipulacaoStr(palavraDigitada);

    retirarEspacos(palavraDigitada, palavraModificada);

    int resultado = inversaoDeString(palavraModificada);

    if (resultado == 1) {
        printf("É um palíndromo\n");
    } else {
        printf("Não é um palíndromo\n");
    }

    return 0;
}