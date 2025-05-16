#include <stdio.h>
#include <math.h>

/*
    Leia as coordenadas de pontos P1 (x1, y1) e P2 (x2, y2) no plano cartesiano 
    e calcule a distância entre P1 e P2.

    para usar pow, deve ser utilizado double

    double pow (double base, double expoente)

    De forma direta:
    distancia = sqrt(pow(xb - xa, 2) + pow(yb - ya));
*/



int main() {
    double xa, ya, xb, yb, distancia, preCalculo;
    printf("Distância entre pontos!\n");
    printf("-------------------------\n");
    printf("Valores de (Ponto 1) Xa e Xb:\n");
    printf("Digite o valor de Xa: ");
    scanf("%lf", &xa);
    printf("Digite o valor de Ya: ");
    scanf("%lf", &ya);
    printf("-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Valor de (Ponto 2) Xb e Yb:\n");
    printf("Digite o valor de Xb: ");
    scanf("%lf", &xb);
    printf("Digite o valor de Yb: ");
    scanf("%lf", &yb);

    preCalculo = pow(xb - xa, 2) + pow(yb - ya, 2);

    distancia = sqrt(preCalculo);

    printf("A distância entre os pontos digitados é: %.2f\n", distancia);
    return 0;
}