#include <stdio.h>

int main() {
    char nome[10];

    printf("Digite algo (leitura pelo fgets):\n");
    fgets(nome, 10, stdin);

    puts("Resultado:");
    puts(nome);
    
    return 0;
}