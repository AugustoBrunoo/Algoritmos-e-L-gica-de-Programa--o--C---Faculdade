#include <stdio.h>

/*

Um técnico está selecionando atletas que tenham altura maior ou igual a 1,80m e idade menor que 18 anos. 
Faça um programa para ler a idade e a altura de um atleta e determinar se o atleta foi selecionado ou não, 
imprimindo o resultado.

x >= 18 e x > 18
*/

int main() {
    int idade;
    float altura;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade > 18) {
        printf("Idade fora da seleção!\n");
        return 0;
    }
    printf("\n");
    printf("Digite sua altura em (metros): ");
    scanf("%f", &altura);

    if (altura < 1.80) {
        printf("Altura fora da seleção!\n");
        return 0;
    }

    printf("Você foi selecionado para ser atleta - Atleta com idade: %d anos e %.2f m de altura\n", idade, altura);
    return 0;
}