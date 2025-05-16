#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
    setlocale(LC_ALL, "Portuguese");

    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto\n");
    fgets(senha_usr, N, stdin);

    // Substitui o \n por 0 "Terminador nulo"
    // o strcspn busca a posição de um elemento na string selecionada
    senha_usr[strcspn(senha_usr, "\n")] = 0;

    ok = strcmp(hardText, senha_usr);

    if (ok == 0) {
        printf("Textos iguais\n");
    } else {
        printf("Textos diferentes\n");
    }
    return 0;
}