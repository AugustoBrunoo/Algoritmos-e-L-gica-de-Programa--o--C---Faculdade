#include <stdio.h>
#include <string.h>

int main() {
    // strcspn ele da a posicao daquela caracter que você procura, uma forma de limpar o \n do fgets

    char str[] = "Augusto\n";

    int posicao = strcspn(str, "A");

    str[posicao] = 'a';

    puts(str);

    // strstr procura uma substring dentro de uma string

    char str2[] = "Augusto vai ser o melhor dev do mundo!";

    char *resultado = strstr(str2, "dev"); // retorna o endereço do ponteiro.

    if (resultado != NULL) {
        printf("Encontrado: %s\n", resultado);
    } else {
        printf("Não encontrado!\n");
    }

    return 0;
}