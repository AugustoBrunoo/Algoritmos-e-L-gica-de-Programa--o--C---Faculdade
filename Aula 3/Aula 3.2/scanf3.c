#include <stdio.h>
#include <stdlib.h>

// usando scanf para cada variavel (o mais recomendado)

int main() {
    int idade = 0;
    float peso = 0.0;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Agora, digite seu peso (KG): ");
    scanf("%f", &peso);

    printf("Sua idade é: %d e você tem %.2f KG\n", idade, peso);
    return 0;
}