#include <stdio.h>
#include <stdlib.h>

// Transformando um numero "string" em número inteiro.

int main() {
    printf("%d\n", '7' - '0');

    // Transformando um numero string float em float
    char num[] = "12.34";

    float valorConvertido = atof(num);

    printf("%.2f\n", valorConvertido);

    return 0;
}



