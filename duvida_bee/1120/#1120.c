#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char numeroFalho;
    char digitos[1000];

   while (1) {
        scanf(" %c %s", &numeroFalho, digitos);

        if (numeroFalho == '0' && strcmp(digitos, "0") == 0) break;

        // printf("%c %s\n", numeroFalho, digitos);

        int tamanhoDigito = strlen(digitos);
        char novoDigito[1000];

        int j = 0;

        for (int i = 0; i < tamanhoDigito; i++) {
            if (digitos[i] == numeroFalho) {
                continue;
            } else {
                novoDigito[j] = digitos[i];
                j++;
            }
        }

        novoDigito[j] = '\0';

        // A partir daqui
        
        int seq0 = 0;
        int tamanhoND = strlen(novoDigito);
        while (novoDigito[seq0] == '0' && seq0 < tamanhoND) {
            seq0++;
        }
        
        if (seq0 == tamanhoND) {
            printf("0\n");
        } else {
            printf("%s\n", &novoDigito[seq0]);
        }
    }
   

    return 0;
}