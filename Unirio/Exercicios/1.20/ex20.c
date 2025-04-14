#include <stdio.h>
#include <math.h>

/*
    Repita o item anterior considerando que o banco utiliza juros compostos. 

    Fórmula de Juros compostos: 
    M = c * (1 + i)^t

    Por exemplo: uma pessoa que pegue R$100,00 emprestados a uma taxa de juros de 1% ao mês estará devendo R$101,00 
    após o primeiro mês (R$100,00 + R$1,00 de juros), R$102,01 após o segundo mês (R$101,00 + R$1,01 de juros), 
    e R$103,03, R$104,06, e R$105,10 após os meses seguintes.

*/

int main() {
    double juros, montante, capital, taxa;
    int tempoDeContrato;
    printf("Calculadora de Juros Compostos\n");
    printf("------------------------------\n");
    printf("\n");
    printf("Valor do empréstimo: R$ ");
    scanf("%lf", &capital);
    printf("\n");
    printf("Valor da taxa de juros em (%%): ");
    scanf("%lf", &taxa);

    taxa = taxa / 100;

    printf("Tempo de Contrato em Meses: ");
    scanf("%d", &tempoDeContrato);
    

    for (int i = 1; i <= tempoDeContrato; i++){
        
        montante = capital * pow(1 + taxa, i); // capital não se atualiza
        juros = montante - capital;

        printf("Mês %d: Juros: R$ %.2f || Total: R$ %.2f\n", i, juros, montante);
    }

    return 0;
}