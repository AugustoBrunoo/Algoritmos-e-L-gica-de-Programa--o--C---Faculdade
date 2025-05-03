#include <stdio.h>

/*
    A sequência de Fibonacci é uma sequência de números formada da seguinte forma: 
    os dois primeiros números da sequência são 0 e 1, e cada número seguinte é dado pela soma dos dois anteriores. 
    Assim o início da sequência fica:
	0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, …

    Leia um número n ≥ 0 e determine qual é o n-ésimo número de Fibonacci. 
    (Considere que a sequência é indexada a partir de 0, ou seja, para n = 0, o número de Fibonacci correspondente é 0.)
*/

int main() {
    int enesimoFibonnaci, num1 = 0, num2 = 1, proximo;

    printf("Digite um número que represente uma posição do Fiboncci\n");
    printf("E direi qual é o valor que a posição escolhida: ");
    scanf("%d", &enesimoFibonnaci);

    if (enesimoFibonnaci == 0) {
        printf("\n");
        printf("O número de Fibonacci de posição %d corresponde ao número: %d\n", enesimoFibonnaci, enesimoFibonnaci);
        return 0;
    } else if (enesimoFibonnaci == 1) {
        printf("\n");
        printf("O número de Fibonacci de posição %d corresponde ao número: %d\n", enesimoFibonnaci, enesimoFibonnaci);
        return 0;
        
    } else {

        for (int i = 2; i <= enesimoFibonnaci; i++) {
            proximo = num1 + num2;

            num1 = num2;
            num2 = proximo;
        }
        printf("\n");
        printf("O número de Fibonacci de posição %d corresponde ao número: %d\n", enesimoFibonnaci, proximo);
    }
    
    return 0;
}