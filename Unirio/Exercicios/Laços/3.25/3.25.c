#include <stdio.h>

/*  
    Uma estratégia para calcular a raiz quadrada de um número X é conhecida como método de Newton-Raphson. 
    
    A ideia é a seguinte: começamos com o número 1 e repetimos o seguinte procedimento por várias “rodadas”. 
    A cada “rodada”, Pegue o número atual n, e substitua ele por:

    (n + X/n) / 2

    Por exemplo, para calcular a raiz quadrada de X = 19, começamos com x0 = 1 e repetimos:

    x1 = (1 + 19/1) / 2 = 10,
    x2 = (10 + 19/10) / 2 = 5.95,
    x3 = (5.95 + 19/5.95) / 2 ≈ 4.57164,

    e assim por diante. Quanto mais rodadas, mais perto o resultado final estará da raiz quadrada de X.
    Leia dois números X e N e execute o método acima por N rodadas para calcular a raiz quadrada de X. 
    Imprima todos os resultados parciais (os valores de x0, x1, …, xN).

*/

int main() {
    int rodadas;
    double calculo, respostaN = 1.0, radicando;

    printf("Digite o número de rodadas: ");
    scanf("%d", &rodadas);
    printf("Deseja a raíz de que número: ");
    scanf("%lf", &radicando);
    printf("\n");

    printf("Calculo da rodada 0: %.5lf\n", respostaN);

    for (int i = 1; i <= rodadas; i++) {
        calculo = (respostaN + radicando / respostaN) / 2.0;
        printf("Calculo da Rodada %d: %lf\n", i, calculo);

        respostaN = calculo;
    }
    
    return 0;
}