#include <stdio.h>

int soma_digitos(int num) {
    int acumulador = 0;

    int digito;
    while (num > 0) {
        digito = num % 10;

        acumulador += digito;

        num /= 10;
    }
    
    return acumulador;
}


int main() {
    int numEscolhido;

    printf("Digite um número: ");
    scanf("%d", &numEscolhido);

    int resultado = soma_digitos(numEscolhido);

    printf("O valor da soma dos dígitos do número: %d, é %d.\n", numEscolhido, resultado);
    
    return 0;
}