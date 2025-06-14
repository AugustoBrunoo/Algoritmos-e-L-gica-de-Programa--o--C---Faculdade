#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 3

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {

    tipo_pessoa lista[TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite os dados da pessoa (%d):\n", i + 1);

        printf("Nome: ");
        getchar();
        fgets(lista[i].nome, sizeof(lista[i].nome), stdin);

        printf("Idade: ");
        scanf("%d", &lista[i].idade);

        printf("Peso: ");
        scanf("%f", &lista[i].peso);
    }

    // system("clear");
    printf("\n");

    printf("Seus dados:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("------------ Pessoa %d ------------\n", i + 1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Peso: %.2f\n", lista[i].peso);
    }

    printf("--------------------------\n");
    
    
    return 0;
}