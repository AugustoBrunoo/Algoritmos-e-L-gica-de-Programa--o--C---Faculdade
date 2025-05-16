#include <stdio.h>
#include <math.h>

/*
    Leia as coordenadas de três pontos P1 (x1, y1), P2 (x2, y2), e P3 (x3, y3) 
    no plano cartesiano e imprima o perímetro e a área do triângulo formado por estes três pontos. 
    (Utilize a fórmula de Heron para a área.)

    Etapas:

    1 - Pegue as coordenadas do ponto
    2 - Descubra os lados com a formula da distancia
    3 - use a formula de heron
*/

int main() {
    double Xa, Ya, Xb, Yb, Xc, Yc, heron, ladoA, ladoB, ladoC, perimetro, semiperimetro;
    printf("Descubra o perímetro e a area do triangulo\n");
    printf("-------------------------------------------\n");
    printf("\n");
    printf("Passo 1:\n");
    printf("Valores do Ponto A:\n");
    printf("Digite o valor de Xa: ");
    scanf("%lf", &Xa);
    printf("Digite o valor de Ya: ");
    scanf("%lf",&Ya);
    printf("-----------------------\n");
    printf("Ponto A: (%.1f, %.1f)\n", Xa, Ya);
    printf("-----------------------\n");
    printf("\n");
    printf("Valores do Ponto B:\n");
    printf("Digite o valor de Xb: ");
    scanf("%lf", &Xb);
    printf("Digite o valor de Yb: ");
    scanf("%lf", &Yb);
    printf("-----------------------\n");
    printf("Ponto B: (%.1f, %.1f)\n", Xb, Yb);
    printf("-----------------------\n");
    printf("Valores do Ponto C:\n");
    printf("Digite o valor de Xc: ");
    scanf("%lf", &Xc);
    printf("Digite o valor de Yc: ");
    scanf("%lf", &Yc);
    printf("-----------------------\n");
    printf("Ponto C: (%.1f, %.1f)\n", Xc, Yc);
    printf("-----------------------\n");
    printf("\n");
    printf("Com os pontos cadastrados temos: \n");
    printf("\n");

    // Etapa 2: Com os pontos definidos, faça a distancia entre os pontos

    ladoA = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));
    ladoB = sqrt(pow(Xc - Xb, 2) + pow(Yc - Yb, 2));
    ladoC = sqrt(pow(Xc - Xa, 2) + pow(Yc - Ya, 2));
    printf("------------------\n");
    printf("| Lado A: %.1f u |\n", ladoA);
    printf("| Lado B: %.1f u |\n", ladoB);
    printf("| Lado C: %.1f u |\n", ladoC);
    printf("------------------\n");
    printf("\n");
    printf("O valor da área utilizando (Formula de Heron): \n");
    printf("\n");

    perimetro = ladoA + ladoB + ladoC;
    semiperimetro = perimetro / 2;
    heron = sqrt(semiperimetro * (semiperimetro - ladoA) * (semiperimetro - ladoB) * (semiperimetro - ladoC));

    printf("--------------------------------------------------------------------\n");
    printf("| O valor do perimetro dos triangulos é: %.1f |\n", perimetro);
    printf("\n");
    printf("| O semiperimetro tem o valor de: %.1f |\n", semiperimetro);
    printf("\n");
    printf("| Utilizando a formula de heron, a area desse triangulo equivale a: %.1f |\n", heron);
    printf("--------------------------------------------------------------------\n");
    return 0;
}