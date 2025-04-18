#include <stdio.h>
#include <math.h>

/*
    Uma loja vende seus produtos com uma entrada mais duas prestações, sendo que:

    - A entrada deve ser maior ou igual às prestações.
    - As duas prestações devem ter valor igual.
    - As prestações devem ter um valor inteiro (sem centavos).
    - As prestações devem ter o maior valor possível.

    Por exemplo, se o valor do produto for R$ 240,00, a entrada e as duas prestações são iguais a R$ 80,00; 
    se o valor do produto for R$ 344,35, a entrada é de R$ 116,35 e as duas prestações são de R$ 114,00 
    (se as duas prestações fossem de R$115,00, a entrada seria menor do que elas).

    Leia o valor do produto e imprima o valor da entrada e das duas prestações, de acordo com as regras acima.
*/

int main() {
    float valorDoProduto;
    int prestacao;
    float entrada;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorDoProduto);

    // Lógica do valor do produto:
    // valorDoProduto = entrada + 2 * prestacao;

    prestacao = (int)(valorDoProduto / 3); // maior valor possivel
    entrada = valorDoProduto - (2 * prestacao);

    printf("Entrada: R$ %.2f\n", entrada);
    printf("1ª Prestação: R$ %d\n", prestacao);
    printf("2ª Prestação: %d\n", prestacao);

    return 0;
}