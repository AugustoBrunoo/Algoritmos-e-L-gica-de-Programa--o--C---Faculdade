#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Transformando um numero "string" em número de verdade.

int main() {
    // Usando a tabela ASCII

    int resultado = '7' - '0';

    /* 
    
    if (isdigit(resultado)) { -> Não funciona, pois isdigite verifica pela tabelas ascii
        printf("Foi transformado em número!\n");
    } else {
        printf("Não foi transformado em número!\n");
    }
    */

    if (resultado >= 0) {
        printf("Resultado é um número!\n");
    } else {
        printf("Resultado não é um número!\n");
    }

    return 0;
}