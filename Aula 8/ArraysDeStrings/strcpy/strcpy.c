#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20 // Isso é uma boa prática!

int main() {
    setlocale(LC_ALL, "Portuguese");

    char origem[N] = {"Olá, Mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino); // Não deve imprimir nada (ou lixo de memória), visto que não copiamos nada ainda

    strcpy(destino, origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

    return 0;
}