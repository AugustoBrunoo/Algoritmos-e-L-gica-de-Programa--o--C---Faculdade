#include <stdio.h>

int main() {
    float valorApagar = 0, taxaFixa, consumoKWH;
    char tipoConsumidor;

    printf("Digite o tipo de consumidor:\n");
    scanf(" %c", &tipoConsumidor);

    printf("\n");

    printf("Digite o seu consumo(KWH):\n");
    scanf("%f", &consumoKWH);

    switch (tipoConsumidor) {
        case 'R':
            taxaFixa = 5;

            valorApagar += taxaFixa + consumoKWH * 0.40;
        break;

        case 'C':
            if (consumoKWH >= 500) {
                valorApagar += 350;
                consumoKWH -= 500;
            }

            if (consumoKWH > 0) {
                valorApagar += consumoKWH * 1.20;
            }

        break;

        case 'I':
            if (consumoKWH > 0 && consumoKWH <= 1500) {
                valorApagar += 1200;
            }

            if (consumoKWH > 1500) {
                consumoKWH -= 1500;
                valorApagar = 1200 + consumoKWH * 1.45;
            }

        break;
    
    default:
        printf("Consumidor não cadastrado!\n");
    break;

    }

    printf("Valor a pagar (R$): %.2f\n", valorApagar);

    return 0;
}