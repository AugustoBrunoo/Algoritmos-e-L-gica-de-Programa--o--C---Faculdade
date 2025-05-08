#include <stdio.h>

int main() {
    int valores[4];

    for (int i = 0; i < 4; i++) {
        printf("Insira um dado:\n");
        scanf("%d", &valores[i]);
    }

    printf("Dados inseridos: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", valores[i]);
    }

    printf("\n");
    
    return 0;
}