#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct retangulo {
    int lado1;
    int lado2;
    int lado3;
    int lado4;
};

typedef struct retangulo retangulo;

bool e_quadrado(retangulo r) {
    if ((r.lado1 == r.lado2) && (r.lado2 == r.lado3) && (r.lado3 == r.lado4)){
        return true;
    } else {
        return false;
    }
}

void perimetro(retangulo r, int i) {
    int calculo = r.lado1 + r.lado2 + r.lado3 + r.lado4;

    printf("O perímetro do retângulo %d: %d\n", i, calculo);
}

void area(retangulo r, int i) {
    int area = r.lado1 * r.lado2;

    printf("O área do retângulo %d: %d\n", i, area);
}


int main() {
    int qtdRetangulos;
    printf("A quantidade de retângulos que deseja manipular: ");
    scanf("%d", &qtdRetangulos);

    retangulo rets[qtdRetangulos];

    for (int i = 0; i < qtdRetangulos; i++) {
        printf("Retangulo %d:\n", i + 1);
        printf("Digite os lados do retângulo: ");
        scanf("%d %d %d %d", &rets[i].lado1, &rets[i].lado2, &rets[i].lado3, &rets[i].lado4);
        printf("\n");
    }

    for (int i = 0; i < qtdRetangulos; i++) {
        if (e_quadrado(rets[i]) == false) {
            perimetro(rets[i], i + 1);
            area(rets[i], i + 1);
        }
    }
    

    return 0;
}