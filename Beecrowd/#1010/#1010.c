#include <stdio.h>

/*
    Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, 
    o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. 
    Após, calcule e mostre o valor a ser pago.

    Entrada: 
    O arquivo de entrada contém duas linhas de dados. 
    Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

    Saída:
    A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após 
    **os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com **2 casas após o ponto.
*/

int main() {
    int codigoDoProduto1, numeroDePecas1, codigoDoProduto2, numeroDePecas2;
    float precoUnitario1, precoUnitario2, total1, total2, totalFull;

    scanf("%d %d %f", &codigoDoProduto1, &numeroDePecas1, &precoUnitario1);
    scanf("%d %d %f", &codigoDoProduto2, &numeroDePecas2, &precoUnitario2);

    total1 = numeroDePecas1 * precoUnitario1;
    total2 = numeroDePecas2 * precoUnitario2;

    
    totalFull = total1 + total2;

    printf("VALOR A PAGAR: R$ %.2f\n", totalFull);

    return 0;
}