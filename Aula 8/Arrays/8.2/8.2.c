#include <stdio.h>

int main() {
    int notas[4] = {10, 50, 20, 30};

    float soma = 0;
    float media;

    for (int i = 0; i < 4; i++) {
        soma += notas[i];
    }

    media = soma / 5.0;

    printf("Média: %.1f\n", media);
    return 0;
}