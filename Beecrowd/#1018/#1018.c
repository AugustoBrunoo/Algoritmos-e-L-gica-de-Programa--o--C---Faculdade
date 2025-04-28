#include <stdio.h>

/*
    Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser 
    decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação 
    de notas necessárias.

    Entrada:
    O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

    Saída: 
    Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, 
    conforme o exemplo fornecido. 

    Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: 
    “Presentation Error”.
*/

int main() {
    int valor, notasDe100, notasDe50, notasDe20, notasDe10, notasDe5, notasDe2, notasDe1;

    printf("Digite o valor em R$: ");
    scanf("%d", &valor);

    if (valor < 0 || valor >  1000000) {
        return 1;
    }

    printf("%d\n", valor);
    notasDe100 = valor / 100;
    valor = valor % 100;
    printf("%d nota(s) de R$ 100,00\n", notasDe100);

    // printf("%d\n", valor % 100);

    notasDe50 = valor / 50;
    valor = valor % 50;
    printf("%d nota(s) de R$ 50,00\n", notasDe50);
    // printf("Resto: %d\n", valor % 50);


    notasDe20 = valor / 20;
    valor = valor % 20;
    printf("%d nota(s) de R$ 20,00\n", notasDe20);
    // printf("Resto do valor: %d\n", valor);

    notasDe10 = valor / 10;
    valor = valor % 10;

    printf("%d nota(s) de R$ 10,00\n", notasDe10);

    notasDe5 = valor / 5;
    valor = valor % 5;

    printf("%d nota(s) de R$ 5,00\n", notasDe5);

    notasDe2 = valor / 2;
    valor = valor % 2;

    printf("%d nota(s) de R$ 2,00\n", notasDe2);

    notasDe1 = valor / 1;
    valor = valor % 1;

    printf("%d nota(s) de R$ 1,00\n", notasDe1);
    
    return 0;
}