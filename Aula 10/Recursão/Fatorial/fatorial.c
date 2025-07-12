#include <stdio.h>

int fatorial (int n) {
    if (n == 1 || n == 0) { // Caso base (Obrigatorio, pois será feito looping infinito)
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int valor = 5;

    int resultado = fatorial(valor);

    printf("O fatorial de %d é %d\n", valor, resultado);
    return 0;
}