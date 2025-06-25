#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char palavra[51];

    while(fgets(palavra, sizeof(palavra), stdin)) {

        int tamanho = strlen(palavra);
        int contador = 0;

        for (int i = 0; i < tamanho; i++) {
            if (palavra[i] == ' ') {
                printf("%c", palavra[i]);
                continue;
            } else {
                if (contador % 2 == 0) {
                    palavra[i] = toupper(palavra[i]);
                } else {
                    palavra[i] = tolower(palavra[i]);
                }

                contador++;
                printf("%c", palavra[i]);
            }
        
        }

    }

    return 0;
}