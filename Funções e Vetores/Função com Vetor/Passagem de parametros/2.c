/*
    "Variáveis simples são passadas por valor (cópia)"
    "Vetores são passados como ponteiro para o primeiro elemento (não cópia)"
    "Para modificar uma variável dentro de uma função, preciso passar o endereço (com ponteiro)"
*/

#include <stdio.h>

void copiaDoValor(int valorCopiado) {
    for (int i = 0; i < 3; i++) {
        valorCopiado++;
    }
}

void manipulacao(int *valor) {
    for (int i = 0; i < 3; i++) {
        (*valor)++;
    }
}

int main() {
    int valor = 22;

    copiaDoValor(valor);

    printf("O valor não será modificado: %d\n", valor);

    manipulacao(&valor);

    printf("Valor manipulado corretamente: %d\n", valor);

    return 0;
}