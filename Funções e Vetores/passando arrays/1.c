#include <stdio.h>

void preencher_vetor(int vetorNum[]) { // -> arrays são automaticamente passados como ponteiros e modificam a original
    for (int i = 0; i < 3; i++){
        int valor = vetorNum[i];

        vetorNum[i] = valor + 10;
    }
}

int main() {
    int vetorNum[3] = {0, 7, 10};

    preencher_vetor(vetorNum);

    printf("O vetor manipulado é: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", vetorNum[i]);
    }

    printf("\n");

    return 0;
}