#include <stdio.h>

int fibbonaci (int n) {
    printf("Chamando fibonacci(%d)\n", n);
    if (n == 1) { // caso base 1
        return 1;
    } else if (n == 0) { // caso base 2
        return 0;
    } else {
        return fibbonaci(n - 1) + fibbonaci(n - 2);
    }
}

int main() {
    int valorPos = 5;

    int resultado = fibbonaci(valorPos);

    printf("A posição %d no fibbonaci é %d\n", valorPos, resultado);

    return 0;
}