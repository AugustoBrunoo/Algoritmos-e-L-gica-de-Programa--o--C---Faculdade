#include <stdio.h>
#include <math.h>

/*
    Leia vários números positivos até o usuário digitar zero e, para cada número, 
    imprima a sua raiz quadrada ou uma mensagem de erro, caso não seja possível calculá-la.

*/

int main() {
    int numero = 1;
    double calculo;
    
    while (numero != 0) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Não é possível calcular raíz de número negativo!\n");
        } else {
            printf("\n");
            calculo = sqrt(numero);
            printf("-=-=-=-=-=-=-=-\n");
            printf("%.2lf\n", calculo);
            printf("-=-=-=-=-=-=-=-\n");
            printf("\n");
        }
    }
    printf("Programa encerrado\n");
    return 0;
}