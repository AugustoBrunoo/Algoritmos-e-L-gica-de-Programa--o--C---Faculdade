#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAMANHO 50

// O recomendado é usar a struct fora da main, para outras funções poderem utilizar

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAMANHO];
};

// Apelidando a struct apenas para tipo_pessoa

// Apelidando 'struct tipo_pessoa' para apenas 'tipo_pessoa' com typedef
typedef struct tipo_pessoa tipo_pessoa;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // pes será usado como forma de entrar na struct, manipulando as variaveis internas a ela
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Início:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    // Atribuindo novos valores aos campos

    pes.idade = 10;
    pes.peso = 99.99;

    // Forma de atribuir outro valor a uma variável de string:
    strcpy(pes.nome, "Texto");

    printf("\nAlterando os campos via código:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    // Solicitando inserções via teclado

    printf("\nInsira um número inteiro:\n");
    scanf("%d", &pes.idade);
    printf("Insira um número real:\n");
    scanf("%f", &pes.peso);

    // números deixam no buffer o '\n' geralmente, se fosse string, deveria ter um laço de repetição.

    // limpa o buffer (nesse caso só o \n)

    getchar();

    printf("Insira um nome:\n");
    fgets(pes.nome, TAMANHO, stdin);

    printf("\nAlterando com dados do usuário:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
    printf("-=-=-=-=-=-=-=-=-=-=-=-\n");

    return 0;
}