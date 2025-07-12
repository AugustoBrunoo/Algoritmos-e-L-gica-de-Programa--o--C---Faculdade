#include <stdio.h>
#include <stdbool.h>

bool hora_valida(int h, int min, int seg) {
    if ((h < 24 && h >= 0) && (min < 60 && min >= 0) && (seg >= 0 && seg < 60)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int h, min, seg;

    printf("Digite uma hora válida (hh:mm:ss): ");
    scanf("%d:%d:%d", &h, &min, &seg);

    bool resultado = hora_valida(h, min, seg);

    if (resultado == true) {
        printf("É uma hora válida!\n");
    } else {
        printf("Não é uma hora válida!\n");
    }

    return 0;
}