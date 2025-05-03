#include <stdio.h>

/*
    Leia os números inteiros n, k, e r.  
    
    Em seguida, imprima os k primeiros termos de uma progressão aritmética (PA) que inicia em n e tem razão r.

*/

int main() {
    int a1, k, r, an;

    printf("Digite N primeiros termos da PA: ");
    scanf("%d", &k);
    printf("A PA inicia a onde? (a1): ");
    scanf("%d", &a1);
    printf("Razão da PA: ");
    scanf("%d", &r);
    printf("\n");

    for (int i = 1; i <= k; i++) {
        // an = a1 * (n - 1) * r;
        an = a1 + (i - 1) * r; 

        printf("%d ", an);
    }
    printf("\n\n");
    return 0;
}