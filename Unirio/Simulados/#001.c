#include <stdio.h>
#include <string.h>

int main() {
    char palavra[10];

    scanf("%s", palavra);

    // puts(palavra);

    int quantidade = strlen(palavra);

    printf("quantidade: %d\n", quantidade);

    char inverso[10];

    int j = 0;

    for (int i = quantidade - 1; i >= 0; i--) {
        inverso[j] = palavra[i];
        j++;
    }

    inverso[j] = '\0';

    for (size_t i = 0; i < strlen(inverso); i++) {
        printf("%c ", inverso[i]);
    }
    printf("\n");
    
    
    if (strcmp(inverso, palavra) == 0) {

        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo\n");
    }

    return 0;
}