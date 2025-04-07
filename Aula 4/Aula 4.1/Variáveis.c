// Variáveis: 

// Não ter na nomenclatura de variaveis:
// 1 - Número na primeira posição
// 2 - Caracteres especiais (!@#$%^...) 
// 3 - Não pode ter espaço

// Operador = : Atribuição

// Constante: 
// Modo de escrita: #define <nome> <valor>
// Um valor que não pode ser alterado durante a execução do programa

#include <stdio.h>

#define texto "Entrada e Saída de dados."


int main() {
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = ""; // char de 50 caracteres

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf(" \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Dados informados:\n");
    printf("Idade: %d. \n", idade);
    printf("Nome: %s\n", nome); // char não se coloca & 
    printf("Altura: %.2f\n", altura);

    return 0;
}