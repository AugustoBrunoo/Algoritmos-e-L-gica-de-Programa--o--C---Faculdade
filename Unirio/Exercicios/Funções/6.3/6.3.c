#include <stdio.h>

int inverso(int num) {
    int digito;
    int reverso = 0;

    while (num > 0) {

        digito = num % 10; // pega o ultimo valor

        num /= 10; // corta o ultimo valor da copia de num

        reverso = reverso * 10 + digito; // cria o novo numero
    }
    
    return reverso;
}

int main() {
    int numEscolhido;

    printf("Digite um número: ");
    scanf("%d", &numEscolhido);

    int resultado = inverso(numEscolhido);

    printf("O número %d invertido é %d\n", numEscolhido, resultado);

    return 0;
}