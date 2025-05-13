#include <stdio.h>

/*
    Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. 

    Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. 

    Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que:
    o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.

    Entrada: 
    O arquivo de entrada contém um valor inteiro N na primeira linha. 
    Cada N linha a seguir contém um caso de teste com três valores com uma casa decimal cada valor.

    Saída: 
    Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.
*/

int main() {
    int quantidade;

    scanf("%d", &quantidade);

    float nota1, nota2, nota3, media;
    for (int i = 1; i <= quantidade; i++) {
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        media = (2 * nota1 + 3 * nota2 + 5 * nota3) / 10.0;
        printf("%.1f\n", media);
    }
    
    return 0;
}