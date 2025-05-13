#include <stdio.h>

/*
    Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

    Entrada: 
    O arquivo de entrada contém 100 números inteiros, positivos e distintos.

    Saída: 
    Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.
*/

int main() {
    int valor, posicao = 0, maiorNum = 0;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &valor);
        
        if (valor > maiorNum) {
            maiorNum = valor;
            posicao = i;
        }
    }
    
    printf("%d\n", maiorNum);
    printf("%d\n", posicao);
    
    return 0;
}