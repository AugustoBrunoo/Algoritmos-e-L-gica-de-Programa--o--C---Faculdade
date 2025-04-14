#include <stdio.h>

/*
    Em uma disputa, um carro parte do repouso e percorre uma pista de 1 km em um tempo t, 
    acelerando de maneira uniforme. 

    Leia o valor de t e calcule a aceleração do carro, em m/s2.
*/

int main() {
    float tempo, aceleracao;
    printf("Um carro parte do repouso e percorre uma pista de 1 km em um tempo T\n");
    printf("---------------------------------------------------------------------\n");
    printf("\n");
    printf("Digite o tempo T (s) e falo qual foi a aceleração: ");
    scanf("%f", &tempo);

    aceleracao = 1000 / tempo;
    printf("\n");
    printf("A aceleracao é de: %.2f m/sˆ2", aceleracao);
    return 0;
}