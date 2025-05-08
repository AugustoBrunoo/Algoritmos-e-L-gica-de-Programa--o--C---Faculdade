#include <stdio.h>

/*
    Aumento de saário;
    0 - 400.00 - 15%
    400.01 - 800.00 - 12%
    800.01 - 1200.00 - 10%
    1200.01 - 2000.00 - 7%
    Acima de 2000.00 - 4%
*/

int main() {
    float salario, novoSalario, aumento;
    int percentual;

    scanf("%f", &salario);

    if (salario < 0) {
        return 1;
    }

    if (salario > 0 && salario <= 400) {
        percentual = 15;
    } else if (salario <= 800) {
        percentual = 12;
    } else if (salario <= 1200.00) {
        percentual = 10;
    } else if (salario <= 2000) {
        percentual = 7;
    } else {
        percentual = 4;
    }

    aumento = salario * (percentual / 100.0);
    novoSalario = salario + aumento;

    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", aumento);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}