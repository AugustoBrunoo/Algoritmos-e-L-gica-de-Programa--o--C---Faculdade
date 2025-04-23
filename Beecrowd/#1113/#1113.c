#include <stdio.h>

/*
    Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. 
    Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados 
    em ordem crescente ou decrescente.

    A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.
*/

int main() {
    int num1 = 0, num2 = 1;

    while (num1 != num2) {
        printf("Digite o valor 1: ");
        scanf("%d", &num1);
        printf("\n");
        printf("Digite o valor 2: ");
        scanf("%d", &num2);
        printf("\n");
        
        if (num1 < num2) {
            printf("Crescente\n");
        } else if (num1 > num2){
            printf("Decrescente\n");
        } else {
            printf("Encerrado!\n");
        }
    }
    return 0;
}