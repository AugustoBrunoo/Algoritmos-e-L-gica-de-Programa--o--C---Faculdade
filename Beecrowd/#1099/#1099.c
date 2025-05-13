#include <stdio.h>

/*
    Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
    Cada caso de teste consiste de dois inteiros X e Y. 
    Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

    Entrada: 
    A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. 
    Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

    Saída: 
    Imprima a soma de todos valores ímpares entre X e Y.    

*/

int main() {
    int quantidade, num1, num2, maiorNum, menorNum;

    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        int acumuladorImpares = 0;

        scanf("%d %d", &num1, &num2);

        if (num1 > num2) {
            maiorNum = num1;
            menorNum = num2;
        } else {
            maiorNum = num2;
            menorNum = num1;
        }

        for (int j = menorNum + 1; j < maiorNum; j++) {
            
            if (j % 2 != 0) {
                acumuladorImpares += j;
            }
        }

        printf("%d\n", acumuladorImpares);
        
    }
    
    return 0;
}