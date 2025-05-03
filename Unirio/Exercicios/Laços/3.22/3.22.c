#include <stdio.h>
#include <math.h>

/*
    Leia os números inteiros n, k, e r.  Em seguida, imprima os k 
    primeiros termos de uma progressão geométrica (PG) que inicia em n e tem razão r.
*/

int main() {
    double primeirosTermos, a1, r, an;

    printf("Digite os N primeiros termos da PG: ");
    scanf("%lf", &primeirosTermos);

    if (primeirosTermos == 0) {
        printf("Número inválido!\n");
        return 0;
    }

    printf("Digite o primeiro termo (a1): ");
    scanf("%lf", &a1);
    printf("Digite a razão: ");
    scanf("%lf", &r);

    if (r == 0) {
        printf("Número inválido!\n");
        return 0;
    }

    printf("\n");
    
    for (int i = 1; i <= primeirosTermos; i++) {
        an = a1 * pow(r, i - 1);

        printf("%.0f ", an);
    }

    printf("\n");
    printf("\n");
    
    return 0;
}