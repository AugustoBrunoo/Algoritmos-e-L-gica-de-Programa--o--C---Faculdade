#include <stdio.h>

/*
    Leia um número inteiro n e informe se ele é divisível por 3 ou por 7.  
    Implemente duas soluções distintas, uma delas sem utilizar operações lógicas.
*/

int main() {
    // Solução 1: Com operação lógica
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0){
        printf("O número %d é divisivel por 3 e por 7 também\n", num);
    } else if (num % 7 == 0) {
        printf("O número %d é divisivel por 7\n", num);
    } else if (num % 3 == 0) {
        printf("O número %d é divisivel por 3\n", num);
    } else {
        printf("Ele não é divisível nem por 3 e nem por 7\n");
    }

    return 0;
}