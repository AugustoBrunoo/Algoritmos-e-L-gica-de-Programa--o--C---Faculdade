#include <stdio.h>

/*
    Uma empresa classifica seus funcionários de acordo com um índice de produtividade: 
    (1) Excelente, 
    (2) Bom e 
    (3) Regular. 

    Cada nível acrescenta um abono ao salário base do funcionário de acordo com o seguinte:
    - Excelente: 40% do salário base
    - Bom: 20% do salário base
    - Regular: 5% do salário base

    Faça um programa que permita a entrada da matrícula, do salário base e o índice de produtividade de vários 
    funcionários, até o usuário digitar matrícula zero ou negativa. 
    
    Para cada funcionário imprima a sua matrícula e seu salário final.
*/

int main() {
    int matricula, indiceDeProdutividade, percentual;
    float salario, aumentoSalario;

    printf("Digite a matrícula do colaborador: ");
    scanf("%d", &matricula);

    while (matricula > 0) {
        if (matricula < 0) {
            break;
        }

        printf("Digite o salário do colaborador: ");
        scanf("%f", &salario);
        printf("\n");
        printf("Digite o indice de produtividade: ");
        scanf("%d", &indiceDeProdutividade);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");



        if (indiceDeProdutividade == 1) {
            percentual = 40;
            aumentoSalario = salario + (salario * 0.4);
        } else if (indiceDeProdutividade == 2) {
            percentual = 20;
            aumentoSalario = salario + (salario * 0.2);
        } else if (indiceDeProdutividade == 3) {
            percentual = 5;
            aumentoSalario = salario + (salario * 0.05);
        } else {
            printf("índice de Produtividade incorreto\n");

            printf("Digite a matrícula do colaborador: ");
            scanf("%d", &matricula);
            continue;
        }

        printf("Digite a matrícula do colaborador: ");
        scanf("%d", &matricula);

        printf("Colaborador:\n");
        printf("Matrícula: %d\n", matricula);
        printf("Salário base: %.2f\n", salario);
        printf("Novo Salário (%d%% +): %.2f\n", percentual, aumentoSalario);
        
        printf("Digite a matrícula do colaborador: ");
        scanf("%d", &matricula);
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Programa encerrado!\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-\n");
    return 0;
}