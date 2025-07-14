#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define QTD 2

/* 
    Crie uma struct Circulo para representar círculos no plano cartesiano, armazenando seu centro e raio, 
    e implemente a função 

    bool colisao( Circulo c1, Circulo c2 );
    que retorna se dois círculos colidem (vide exercício 6.6).

*/

struct circulo {
    double raio;
    double x, y;
};

typedef struct circulo circulo;

bool colide(circulo c1, circulo c2) {
    double distancia = pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2);
    double soma_raios = c1.raio + c2.raio;

    if (distancia <= soma_raios * soma_raios) {
        return true;
    } else {
        return false;
    }
}

int main() {
    circulo circulos[QTD];

    for (int i = 0; i < QTD; i++) {
        printf("Dígite o raio | x | y do círculo %d: ", i + 1);
        scanf("%lf %lf %lf", &circulos[i].raio, &circulos[i].x, &circulos[i].y);
    }

    bool resultado = colide(circulos[0], circulos[1]);
    
    if (resultado) {
        printf("Os circulos se colidem!\n");
    } else {
        printf("Os circulos não se colidem\n");
    }

    return 0;
}