#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 50

int main() {
    setlocale(LC_ALL, "Portuguese");

    char s[N];
    size_t i;

    printf("Digite um Texto:\n");
    fgets(s, N, stdin);
    i = strlen(s);
    printf("\nTamanho do texto %zu\n\n", i);

    printf("Impressão de posição a posição:\n");
    for (i = 0; i < strlen(s); i++) {
        printf("%c", s[i]);
    }
    

    
    return 0;
}