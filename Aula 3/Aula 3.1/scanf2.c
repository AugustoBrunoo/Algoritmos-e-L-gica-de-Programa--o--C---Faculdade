#include <stdio.h>
#include <stdlib.h>

// usando um scanf para 2 variáveis distintas

int main() {
    int idade = 0;
    int ano = 1950;

    printf("Digite sua idade e o ano de nascimento\n");
    scanf("%d %d", &idade, &ano);
    
    printf("Sua idade: %d. \n", idade);
    printf("Seu ano de nascimento: %d. \n", ano);
    return 0;
}