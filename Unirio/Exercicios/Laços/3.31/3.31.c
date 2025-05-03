#include <stdio.h>

/*
    Leia um número n (ímpar com n ≥ 3) e imprima um losango de asteriscos com largura n. 
    Por exemplo, se n = 5, imprima:

        *
      * * *
    * * * * *
      * * *
        *


*/

int main() {
    int num;

    printf("Digite um número (ÍMPAR) e MAIOR OU IGUAL A 3: ");
    scanf("%d", &num);

    if (num % 3 == 0 || num < 3) {
        printf("Número inválido!\n");
        return 1;
    }
    printf("\n");

    int meio = (num + 1) / 2; // a linha do meio do losango
    
    // Quantas linhas deve ter
    for (int i = 1; i <= num; i++) {
        int qtd_asteristicos;
        
        if (i <= meio) {
            qtd_asteristicos = 2 * i - 1;
        } else {
            qtd_asteristicos = 2 * (num - i) + 1;
        }

        int qtd_espacos = (num - qtd_asteristicos) / 2;

        for (int espacos = 0; espacos < qtd_espacos; espacos++) {
            printf(" ");
        }

        for (int asteristico = 0; asteristico < qtd_asteristicos; asteristico++) {
            printf("*");

            // if (asteristico < qtd_asteristicos - 1) {
            //     printf("");
            // }
        }
        printf("\n");
    }
    return 0;
}