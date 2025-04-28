#include <stdio.h>

/*
    Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. 
    A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
    As notas consideradas são de 100, 50, 20, 10, 5, 2. 
    As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
    A seguir mostre a relação de notas necessárias.

    A Entrada: 
    O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

    Saída: 
    Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.
*/

int main() {
    float valor;
    int notasDe100, notasDe50, notasDe20, notasDe10, notasDe5, notasDe2, valorEmInt, save;
    int moeda1, moeda050, moeda025, moeda010, moeda005, moeda001;


    printf("Digite o valor (em R$): ");
    scanf("%f", &valor);

    valorEmInt = valor;
    save = valorEmInt;

    printf("%d\n", valorEmInt);

    notasDe100 = valorEmInt / 100;
    valorEmInt = valorEmInt % 100;

    notasDe50 = valorEmInt / 50;
    valorEmInt = valorEmInt % 50;

    notasDe20 = valorEmInt / 20;
    valorEmInt = valorEmInt % 20;

    notasDe10 = valorEmInt / 10;
    valorEmInt = valorEmInt % 10;

    notasDe5 = valorEmInt / 5;
    valorEmInt = valorEmInt % 5;

    notasDe2 = valorEmInt / 2;
    valorEmInt = valorEmInt % 2;

    printf("%d nota(s) de R$ 100.00 \n", notasDe100);
    printf("%d nota(s) de R$ 50.00\n", notasDe50);
    printf("%d nota(s) de R$ 20.00\n", notasDe20);
    printf("%d nota(s) de R$ 10.00\n", notasDe10);
    printf("%d nota(s) de R$ 5.00\n", notasDe5);
    printf("%d nota(s) de R$ 2.00\n", notasDe2);

    printf("%d\n", valorEmInt);

    // Moedas: 

    // restante:
    valor = (valor - save) + valorEmInt;
    printf("%f", valor);

    // printf("Moedas: ");
    moeda1 = valor / 1;
    valorEmInt = valor % 1;

    // printf("%f", valorEmInt);
    return 0;
}