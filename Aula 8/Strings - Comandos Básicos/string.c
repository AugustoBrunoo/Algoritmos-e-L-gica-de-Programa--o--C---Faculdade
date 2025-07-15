#include <stdio.h>
#include <string.h>

void retirarN (char string[], int tamanho) {
    if (string[tamanho - 1] == '\n') {
        string[tamanho - 1] = '\0';
        tamanho--;
    }
}

void retirarNEnxuto(char string[], int tamanho) {
    string[strcspn(string, "\n")] = "\0";
}

int main() {
    char exemplo[30] = {"Augusto"};
    char exemplo2[] = {"Bruno"};

    strcat(exemplo, " Bruno");

    printf("%s\n", exemplo);

    // comando strcspn -> acha o primeiro caracter dentro de uma string (alvo)

    int indice = strcspn(exemplo, "u"); // --> pos 2

    

    return 0;
}