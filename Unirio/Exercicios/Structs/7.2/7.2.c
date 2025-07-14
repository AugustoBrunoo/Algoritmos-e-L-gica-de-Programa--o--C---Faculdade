#include <stdio.h>
#include <stdbool.h>

/*
    Crie uma struct Triangulo para representar triângulos, armazenando o comprimento de seus lados (inteiros), 
    e implemente as funções.

    bool valido( Triangulo tri );

    void imprime( Triangulo tri );

    bool e_retangulo( Triangulo tri );

    que, respectivamente, determina se tri é um triângulo válido, 
    imprime o tipo do triângulo tri (equilátero, isósceles, ou escaleno), 
    e determina se tri é um triângulo retângulo (vide exercícios 2.11–12).

*/

struct triangulo {
    int l1;
    int l2;
    int l3;
};

typedef struct triangulo triangulo;

bool valido (triangulo t) {
    if ((t.l1 < t.l2 + t.l3) && (t.l2 < t.l1 + t.l3) && (t.l3 < t.l2 + t.l1) && (t.l1 > 0 && t.l2 > 0 && t.l3 > 0)) {
        return true;
    } else {
        return false;
    }
}

void imprimeTri(triangulo t, int i) {
    if ((t.l1 != t.l2) && (t.l2 != t.l3) && (t.l1 != t.l3)) {
        printf("O triângulo %d é escaleno!\n", i + 1);
    } else if ((t.l1 == t.l2) && (t.l2 == t.l3) && (t.l1 == t.l3)) {
        printf("O triângulo %d é equilátero!\n", i + 1);
    } else {
        printf("O triângulo %d é isósceles\n", i + 1);
    }
}

bool e_retangulo(triangulo t) {
    if (t.l1 * t.l1 == (t.l2 * t.l2) + (t.l3 * t.l3) || t.l2 * t.l2 == (t.l3 * t.l3) + (t.l1 * t.l1) || t.l3 * t.l3 == (t.l2 * t.l2) + (t.l1 * t.l1)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int qtd;
    printf("Digite quantos triângulos deseja armazenar: ");

    scanf("%d", &qtd);

    triangulo vetorTriangulo[qtd];

    for (int i = 0; i < qtd; i++) {
        printf("Triângulo %d\n", i + 1);
        printf("\n");
        printf("Digite os lados do triângulo %d: ", i + 1);
        scanf("%d %d %d", &vetorTriangulo[i].l1, &vetorTriangulo[i].l2, &vetorTriangulo[i].l3);

        printf("\n");
    }

    for (int i = 0; i < qtd; i++) {
        if (valido(vetorTriangulo[i])) {
            imprimeTri(vetorTriangulo[i], i);
            if (e_retangulo(vetorTriangulo[i])) {
                printf("O triângulo %d é um triângulo retângulo!\n", i + 1);
            }
        }
    }
    
    
    return 0;
}