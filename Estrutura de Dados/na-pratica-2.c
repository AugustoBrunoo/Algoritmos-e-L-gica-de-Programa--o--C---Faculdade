#include <stdio.h>

void ordBubbleSort(int *vetor, int tamanho) {
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
        
        final--; // Ordena cada valor, e por isso a gente reduz o final, pois
        // não precisa refazer a verificacao de quem ja foi ordenado
        
    } while (trocou);
    
}

int buscaBinaria(int *vetor, int tamanho, int valorABuscar) { // Vetor tem que estar ordenado
    int inicio = 0, fim = tamanho - 1, meio , encontrado = -1;

    do {

        meio = (inicio + fim) / 2;

        if (valorABuscar > vetor[meio]) {
            inicio = meio + 1;
        } else if (valorABuscar < vetor[meio]) {
            fim = meio - 1;
        } else {
            encontrado = meio;

            return encontrado;
        }
        
    } while (encontrado == - 1 && inicio <= fim);

    return -1;
}

int main() {
    const int tamanho = 5;

    int vetor[tamanho] = {64, 70, 32, 37, 78};

    ordBubbleSort(vetor, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    int valorABuscar;

    printf("\n\n");
    printf("Digite um valor para buscar (Busca Binária): ");
    scanf("%d", &valorABuscar);

    int posicao = buscaBinaria(vetor, tamanho, valorABuscar);

    if (posicao != -1) {
        printf("Encontrado na posição %d do vetor!\n", posicao);
    } else {
        printf("O valor não foi encontrado!\n");
    }
    

    return 0;
}