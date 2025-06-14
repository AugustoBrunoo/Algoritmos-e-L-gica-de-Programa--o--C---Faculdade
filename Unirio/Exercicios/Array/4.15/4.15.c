/*
    Leia uma sequência de 10 números inteiros e imprima o valor que aparece com maior frequência 
    (em caso de empate, imprima o que aparecer primeiro).
*/

#include <stdio.h>

#define N 10

int main() {
    int sequencia[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &sequencia[i]);
    }

    int quantidadeNum = 0;
    int quantidadeMaiorNum = 0;

    int maiorNum;
    int save;

    for (int i = 0; i < N; i++) {
    
        for (int j = 0; j < N; j++) {
            if (sequencia[i] == sequencia[j]) {
                quantidadeNum++;
            }            
        }

        if (quantidadeNum > quantidadeMaiorNum) {
            maiorNum = sequencia[i];
            quantidadeMaiorNum = quantidadeNum;
            save = quantidadeNum;
        }

        quantidadeNum = 0;
    }
    
    printf("Maior número: %d\n", maiorNum);
    printf("Quantidade de numeros: %d\n", save);

    
    return 0;
}