#include <stdio.h>

/*
    Um banco adotou uma nova política de concessão de financiamentos: 

    qualquer pessoa só terá um pedido de financiamento concedido se o valor pretendido for, 
    no máximo, 5 vezes o seu salário. 
    
    1 - Leia o valor do salário de uma pessoa e o valor de um 
    financiamento pretendido e determine se o financiamento foi concedido ou negado, 
    imprimindo o resultado.

*/

int main() {
    float salario, valorMaxPermitido, valorSolicitado;
    printf("Financiamento - Banco\n");
    printf("---------------------\n");
    printf("\n");
    printf("Digite seu salário: R$ ");
    scanf("%f", &salario);

    valorMaxPermitido = salario * 5;
    printf("Valor máximo permitido: %.2f", valorMaxPermitido);

    printf("\n");
    printf("Digite o valor desejado no financiamento: R$ ");
    scanf("%f", &valorSolicitado);
    printf("\n");

    if (valorSolicitado <= valorMaxPermitido) {
        printf("Financiamento concedido!\n");
    } else {
        printf("Financiamento negado\n");
    }
    

    return 0;
}