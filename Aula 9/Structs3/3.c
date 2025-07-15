#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct tipoFilmes {
    char nome[100];
    int nota;
};

typedef struct tipoFilmes tipoFilmes;

void funcao(tipoFilmes f) {
    printf("%s", f.nome); // como chamar struct para uma função
}

int main() {
    int qtdFilmes;

    
    printf("Quantos filmes você deseja adicionar: ");
    scanf("%d", &qtdFilmes);
    getchar();

    tipoFilmes filmes[qtdFilmes];
    
    for (int i = 0; i < qtdFilmes; i++) {
        printf("Nome do filme %d: ", i + 1);
        fgets(filmes[i].nome, 30, stdin);

        filmes[i].nome[strcspn(filmes[i].nome, "\n")] = '\0';

        printf("Nota do filme (0 - 10): ");
        scanf("%d", &filmes[i].nota);
        getchar();
    }

    printf("Filmes cadastrados:\n");

    for (int i = 0; i < qtdFilmes; i++) {
        printf("\nFilme %d:\n\n", i + 1);
        printf("Nome do filme %d: %s\n", i + 1, filmes[i].nome);
        printf("Nota do filme %d: %d\n", i + 1, filmes[i].nota);
    }
    
    printf("\n");

    // funcao(filmes);
    
    return 0;
}