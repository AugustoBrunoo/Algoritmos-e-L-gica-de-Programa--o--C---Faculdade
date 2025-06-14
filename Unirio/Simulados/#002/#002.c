#include <stdio.h>

int main() {
    int valor, contadorPares = 0, somaPares = 0;
    float media;

    do {
        printf("Digite um valor (Positivo): \n");
        
        scanf("%d", &valor);

        if (valor < 0) {
            printf("Digite um número positivo!\n");
            continue;
        }

        if (valor % 2 == 0 && valor != 0) {
            contadorPares++;
            somaPares += valor;
        }

    } while (valor != 0);

    media = (float)somaPares / contadorPares;

    printf("Quantidade de pares registrados: %d\n", contadorPares);
    printf("Média dos pares registrados: %.2f\n", media);
    
    return 0;
}