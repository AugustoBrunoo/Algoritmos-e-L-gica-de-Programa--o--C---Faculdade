#include <stdio.h>
#include <math.h>

/*
    Leia dois inteiros x e y e imprima o maior múltiplo de x menor ou igual a y. 
    Exemplo: se x = 9 e y = 38, então o resultado é 36.
*/

int main() {
    int numX, numY, i;
    int valorMultiplo = 0;

    printf("Digite um valor em X e Y...\n");
    printf("Vou procurar um multiplo de X menor ou igual a Y\n");
    printf("\n");
    printf("Digite o valor de X: ");
    scanf("%d", &numX);
    printf("Digite o valor Y: ");
    scanf("%d", &numY);

    i = 1; // tem que ser fora pois se não declara como 1 pra sempre
    int ultimoMultiploValido = 0;
    while (valorMultiplo <= numY) {
        valorMultiplo = numX * i;
        
        if (valorMultiplo > numY) {
            break;
        }

        ultimoMultiploValido = valorMultiplo;
        i++;
    }

    printf("O último múltiplo de %d = %d\n", numX ,ultimoMultiploValido);
    
    
    return 0;
}