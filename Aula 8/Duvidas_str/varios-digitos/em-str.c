#include <stdio.h>
#include <string.h>
#include <stdlib.h> // -> Responsável por ter a função atoi()

// 190.930.707-62

int main() {
    char cpf[11] = {"19093070762"};

    for (int i = 0; i < 11; i++) {
        // printf("%c\n", cpf[i]); --> 1 9 0 9 3 0 7 0 7 6 2
        int digito = cpf[i] - '0';
        
        printf("Saber se é um número: %d + %d = %d\n", digito, 1, digito + 1); // Número transformado
    } 

    char numero[] = {"64"};
    int charEmNum = atoi(numero);
    printf("Num Transformado + 10: %d + %d = %d\n", charEmNum, 10, charEmNum + 10);

    return 0;
}