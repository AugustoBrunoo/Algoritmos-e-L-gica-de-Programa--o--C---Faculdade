#include <stdio.h>

/*
    Um banco empresta valores a juros fixos mensais, utilizando juros simples. 

    Formula Juros Simples: 
    J = c * i * t

    Leia um valor de empréstimo e a taxa de juros utilizada pelo banco e imprima os valores 
    devidos nos 5 meses seguintes. 
    
    Por exemplo:
    
    Uma pessoa que pegue R$100,00 emprestados a uma taxa de juros de 1% ao mês estará devendo R$101,00 
    após o primeiro mês (R$100,00 + R$1,00 de juros), e R$102,00, R$103,00, R$104,00, R$105,00 
    após os meses seguintes.

*/

int main() {
    float juros, taxa, capital, montante;
    printf("Calculadora de Juros em Até 5 meses\n");
    printf("---------------------\n");
    printf("\n");
    printf("Digite o valor do empréstimo: R$ ");
    scanf("%f", &capital);
    printf("\n");
    printf("Taxa de Juros do Banco em (%%): ");
    scanf("%f", &taxa);

    taxa = taxa / 100;
    // printf("%.2f", taxa);
    printf("\n");
    printf("-----------------------------\n");
    printf("Juros a cada mês: \n");
    printf("\n");
    for (int i = 1; i <= 5; i++) {

        juros = capital * taxa * i;
        montante = capital + juros;

        printf("Juros do Mês %d: (Juros) R$ %.2f | (Total): %.2f\n", i, juros, montante);
    }

    return 0;
}