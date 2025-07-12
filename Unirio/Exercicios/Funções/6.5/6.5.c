#include <stdio.h>

int segundos (int hr, int min, int seg) {
    if ((hr >= 0 && hr < 24) && (min >= 0 && 60 > min) && (seg >= 0 && seg < 60)) {
        int somaTotal = 0;

        somaTotal += (hr * 3600) + (min * 60) + seg;
        
        return somaTotal;
    } else {
        return -1;
    }
}

int main() {
    int hr, min, seg;

    printf("Digite uma hora válida (hh:mm:ss): ");
    scanf("%d:%d:%d", &hr ,&min ,&seg);

    int resultado = segundos(hr, min, seg);

    if (resultado == -1) {
        printf("Hora inválida!\n");
    } else {
        printf("Quantidade de segundos total: %d\n", resultado);
    }

    return 0;
}