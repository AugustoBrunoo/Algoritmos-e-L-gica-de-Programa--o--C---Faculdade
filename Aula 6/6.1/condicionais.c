#include <stdio.h>

/*
Como criar condições lógico operacionais:

IF: Se a condição é verdadeira, o bloco é executado, senão, é ignorado

Operadores relacionais: 

Maior: >
Maior ou igual: >=

Menor: <
Menor ou igual: <=

Igual: ==
Diferente: !=

*/

// Calculadora de Média

int main() {
    float media;

    printf("Qual foi sua média nesse semestre: ");
    scanf("%f", &media);

    if (media > 7.0) {
        printf("Você foi aprovado!\n");
    } else {
        printf("Você está em prova final\n");
    }
        
    return 0;
}