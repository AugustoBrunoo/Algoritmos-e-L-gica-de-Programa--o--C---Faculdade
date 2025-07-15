#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *vetor, int tamanho) {
    int final = tamanho - 1, aux, trocou;

    do {
        trocou = 0;

        for (int i = 0; i < final; i++) {
            if (vetor[i] > vetor[i + 1]) {

                aux = vetor[i];
                vetor[i] = vetor[i + 1]; 

                vetor[i + 1] = aux;
                trocou = 1;
            }
        }

        final--; // -> evita repetição
        
    } while (trocou);
}

int main() {
    const int tamanho = 5;

    int vetor[tamanho] = {99, 74, 64, 88, 32};

    bubbleSort(vetor, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    

    return 0;
}