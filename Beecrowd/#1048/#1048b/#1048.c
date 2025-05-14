#include <stdio.h>

int main() {
    double salario, reajuste, novoSalario;
    int aumento;

    scanf("%lf", &salario);

    if (salario > 0 && salario <= 400.00) {
        aumento = 15;
    } else if (salario <= 800.00) {
        aumento = 12;
    } else if (salario <= 1200.00) {
        aumento = 10;
    } else if (salario <= 2000.00) {
        aumento = 7;
    } else {
        aumento = 4;
    }
    
    reajuste = salario * aumento / 100;

    novoSalario = salario + reajuste;

    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", aumento);

    return 0;
}