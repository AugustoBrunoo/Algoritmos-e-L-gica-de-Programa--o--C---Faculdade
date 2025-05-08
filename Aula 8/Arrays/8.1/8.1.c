#include <stdio.h>

int main() {
    int valores[4];
    float media;

    valores[0] = 10;
    valores[1] = 7;
    valores[2] = 4;
    valores[3] = 6;

    media = (valores[0] + valores[1] + valores[2] + valores[3]) / 5.0;

    printf("Média: %.1f\n", media);

    return 0;
}