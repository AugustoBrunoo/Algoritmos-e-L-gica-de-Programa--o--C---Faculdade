#include <stdio.h>

/*
    Leia uma distância em km e imprima esta distância, medida em milhas.
*/

int main() {
    float km, mph;
    printf("Conversor de KM para Milha\n");
    printf("-=-=--=-=-=-=-=-=-==-=-=-=-=-=\n");
    printf("Digite o valor em KM: ");
    scanf("%f", &km);

    mph = km / 1.609344;

    printf("O valor de %.2f KM é %.2f Milhas\n", km, mph);

    return 0;
}