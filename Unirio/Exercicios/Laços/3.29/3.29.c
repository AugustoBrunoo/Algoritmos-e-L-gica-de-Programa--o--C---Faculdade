#include <stdio.h>

/*
    Leia dois números n e m (ambos positivos) e imprima um *retângulo* n x m de asteriscos.
*/

int main() {
    int n, m;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("Digite o valor de M: ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0) {
        printf("Ambos os números N e M devem ser positivos!\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j == m) {
                printf("*");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
    

    return 0;
}