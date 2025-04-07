// Estrutura de repetição: Repete comandos até uma determinada condição
// Existe o While (quando vc não sabe o fim) e for (quando vc sabe até onde vai);
#include <stdio.h>


int main() {
    int i = 1; // É necessário inicializar a variável

    while (i <= 10) {
        printf("%d\n", i) ;
        i++;
    }
    printf("Fim\n");

    return 0;
}