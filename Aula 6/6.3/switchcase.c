#include <stdio.h>

/*
Estrutura de repetição SWITCH CASE:
Inúmeras situações para cada tipo de resposta que o usuário digitar
Dependendo da resposta, ele procura o bloco que vc solicita e ignora os demais.

*/

int main()
{
    int respUsuario;
    int num1, num2;

    printf("Bem vindo a calculadora C!\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\n");

    printf("Digite o 1º número: ");
    scanf("%d", &num1);
    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\n");

    printf("Números escolhidos: %d e %d\n", num1, num2);
    printf("Digite uma das opções:\n");

    printf("1 - Multiplicação\n");
    printf("2 - Adição\n");
    printf("3 - Subtração\n");
    printf("4 - Divisão\n");
    printf("-----------------\n");

    printf("Digite uma opção: ");
    scanf("%d", &respUsuario);

    int soma, subtracao, multiplicacao, divisao;

    switch (respUsuario) {
    case 1:
        multiplicacao = num1 * num2;
        printf("%d x %d = %d\n", num1, num2, multiplicacao);
        break;
    case 2:
        soma = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, soma);
        break;
    case 3:
        subtracao = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, subtracao);
        break;
    case 4:
        divisao = num1 / num2;
        printf("%d / %d = %d\n", num1, num2, divisao);
        break;
    default: // Bloco responsavel caso a opção nao exista
        printf("Valor inválido!\n");
        break;
    }

    return 0;
}
