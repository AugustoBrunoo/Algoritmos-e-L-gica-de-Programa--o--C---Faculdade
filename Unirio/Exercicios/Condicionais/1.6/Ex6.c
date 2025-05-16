#include <stdio.h>
/*
Uma loja está oferecendo desconto em cima dos preços de seus produtos. 
Leia o valor de um produto e o percentual de desconto e exiba seu novo valor, 
com o desconto aplicado.

Pode fazer conta entre float e int normalmente
*/

int main() {
    int desconto;
    float valor, novoValor;
    printf("Programa de Descontos \n");
    printf("Digite o valor do produto (R$): ");
    scanf("%f", &valor);
    printf("\n");
    printf("Digite o desconto: ");
    scanf("%d", &desconto);

    novoValor = valor - (valor * desconto / 100);

    printf("O valor do produto (R$ %.2f) com %d%%, vai ficar R$ %.2f!\n", valor, desconto, novoValor);

    return 0;
}