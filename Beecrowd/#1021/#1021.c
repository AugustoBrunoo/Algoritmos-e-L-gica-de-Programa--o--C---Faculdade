#include <stdio.h>

int main () {
    double valor;
    int notasDe100, notasDe50, notasDe20, notasDe10, notasDe5, notasDe2, valorEmInt, save;
    int moeda1, moeda050, moeda025, moeda010, moeda005, moeda001, conversor;

    scanf("%lf", &valor);

    valorEmInt = valor;
    save = valorEmInt;

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
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notasDe100);
    printf("%d nota(s) de R$ 50.00\n", notasDe50);
    printf("%d nota(s) de R$ 20.00\n", notasDe20);
    printf("%d nota(s) de R$ 10.00\n", notasDe10);
    printf("%d nota(s) de R$ 5.00\n", notasDe5);
    printf("%d nota(s) de R$ 2.00\n", notasDe2);

    valor = (valor - save) + valorEmInt;

    printf("MOEDAS:\n");

    conversor = valor * 100;

    moeda1 = conversor / 100;

    printf("%d moeda(s) de R$ 1.00\n", moeda1);

    moeda050 = (conversor % 100) / 50;

    printf("%d moeda(s) de R$ 0.50\n", moeda050);

    moeda025 = (conversor - (moeda1 * 100 + moeda050 * 50))/ 25;

    printf("%d moeda(s) de R$ 0.25\n", moeda025);

    moeda010 = (conversor - (moeda1 * 100 + moeda050 * 50 + moeda025 * 25))/ 10;

    printf("%d moeda(s) de R$ 0.10\n", moeda010);

    moeda005 = (conversor - (moeda1 * 100 + moeda050 * 50 + moeda025 * 25 + moeda010 * 10))/ 5;

    printf("%d moeda(s) de R$ 0.05\n", moeda005);

    moeda001 = (conversor - (moeda1 * 100 + moeda050 * 50 + moeda025 * 25 + moeda010 * 10 + moeda005 * 5));

    printf("%d moeda(s) de R$ 0.01\n", moeda001);

    return 0;
}