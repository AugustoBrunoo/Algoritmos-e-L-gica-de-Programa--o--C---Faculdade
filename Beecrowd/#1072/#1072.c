#include <stdio.h>

/*
    Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
    Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, 
    mostrando essas informações.

    Entrada: 
    A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
    Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).

    Saída: 
    Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.
*/

int main() {
    int quantidade, valores, contadorIn = 0, contadorOut = 0;

    scanf("%d", &quantidade);

    if (quantidade >= 10000) {
        return 0;
    }

    for (int i = 1; i <= quantidade; i++) {
        scanf("%d", &valores);

        if (valores >= 10 && valores <= 20) {
            contadorIn++;
        } else {
            contadorOut++;
        }
    }

    printf("%d in\n", contadorIn);
    printf("%d out\n", contadorOut);
    
    return 0;
}