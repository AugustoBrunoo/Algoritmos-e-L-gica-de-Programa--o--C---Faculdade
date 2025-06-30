#include <stdio.h>

/*
    "Ordenação"

    É a tarefa de colocar um conjunto de dados em uma determinada
    ordem

    Permite acesso mais eficiente aos dados

    "Algoritmo de ordenação"
    É o algoritmo que coloca os elementos de uma dada sequência
    em uma certa ordem.

    Exemplo: 
    5, 2, 1, 3, 4

    1, 2, 3, 4, 5

*/

/* 
    Bubble Sort
    - Ordena um vetor de maneira crescente
    - Sempre comparamos pares adjacentes
*/

void bubbleSort(int *v, int N) {
    int trocou, aux, fim = N;

    do {
        trocou = 0;

        /* Carrega o maior valor para o final da array */
        for (int i = 0; i < fim - 1; i++) {
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                trocou = 1;
            }
        }

        fim--; /* N, N - 1, N - 2, aqui deve diminuir, pois aquele que pegou não muda de lugar */
        
    } while (trocou);
     
}

/*
    A busca binária funciona apenas para vetores ordenados

    Ele pega o meio da array, verifica qual numero é esta no meio 
    e ajusta o array dnv, sendo muito eficiente.
*/

void buscaBinaria(int *vetor, int tamanho, int valorABuscar) {

    int inicio = 0, fim = tamanho - 1, meio;

    int encontrado = -1;

    do {
        meio = (inicio + fim) / 2;

        if (valorABuscar > vetor[meio]) {
            inicio = meio + 1;
        } else if (valorABuscar < vetor[meio]) {
            fim = meio - 1;
        } else {
            encontrado = meio; // Encontrado
        }

    } while (encontrado == -1 && inicio <= fim);

    if (encontrado != -1) {
        printf("Encontrado na posição %d\n", encontrado);
    } else {
        printf("-1\n");
    }
    
}


/*
    InsertionSort -> Ordenação por Inserção

    Pega um numero de cada vez e coloca em ordem, no seu devido lugar
    Não troca iguais de lugar.
*/

void insertionSort(int *vetor, int tamanho) {
    int i, j, chave;

    for (int i = 1; i < tamanho; i++) {
        chave = vetor[i]; // (3) = 3
        j = i - 1; // anterior  j = 2
        
        // Move os maiores para frente
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j]; // Desloca o maior para a direita (3) = 5
            j--; // Vai para o anterior
        }

        // Insere no lugar certo
        vetor[j + 1] = chave;
    }
    
}

/*
    SelectionSort -> A cada passo, procura o menor valor da array e o coloca na primeira posição do array

    Descarta-se a primeira posição do array e repete-se o processo para a segunda posição,
    isso é feito para todas as posições do array.

    - Ineficiente para grande conjunto de dados.
    - Estável
    - Alto custo computacional
*/

void selectionSort(int *vetor, int tamanho) { // Procura o menor elemento em relação a i
    int menor, troca;
    for (int i = 0; i < tamanho - 1; i++) {
        menor = i;
        for (int j = i + 1; j < tamanho - 1; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }

            if (i != menor) { // Troca valores da posição atual com a "menor"
                troca = vetor[i];
                vetor[i] = vetor[menor];
                vetor[menor] = troca;
            }
        }
    }
}

int main() {
    int array1[] = {50, 2, 6, 7 ,10};

    int tamanho = sizeof(array1) / sizeof(array1[0]);

    bubbleSort(array1, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    buscaBinaria(array1, tamanho, 10);
    
    return 0;
}