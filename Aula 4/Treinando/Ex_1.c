#include <stdio.h>
// #include <stdlib.h>

#define textoInicial "Digite seus dados corretamente: "

int main() {    
    
    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";
    char sexo [2] = "";

    printf("%s \n", textoInicial);
    printf("-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    printf("Digite seu sexo [M, F, ... Coloque SIGLAS]:\n");
    scanf("%s", sexo);

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Dados cadastrados:\n");
    printf("Nome: %s\n", nome);
    printf("Sexo: %s\n", sexo);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    return 0;
}