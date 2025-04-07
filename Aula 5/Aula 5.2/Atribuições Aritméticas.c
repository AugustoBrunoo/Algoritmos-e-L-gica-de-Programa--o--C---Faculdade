#include <stdio.h>

/*
Operadores de atribuição aritmética:

1 - Incremento em 1 unidade: ++
2 - Decremento em 1 unidade: -- 
3 - Incremento genérico: +=
4 - Decremento genérico: -=
5 - Atribuição com multiplicação: *=
6 - Atribuição com divisão: /=

*/

#define textoInicial "Aprendendo sobre atribuição aritmética!"

int main() {
    int dado;
    int dadoSave;

    printf("%s\n", textoInicial);
    printf("Digite o valor para ser manipulado: ");
    scanf("%d", &dado); // scanf da /n automaticamente

    printf("Veja como funciona a manipulação: \n");

    dado++;
    printf("Incrementando (++): %d\n", dado);

    dado--;
    printf("Decrementando (--): %d\n", dado);

    dado += 3;
    printf("Incrementando em 3 unidades (+= 3): %d\n", dado);

    dado -= 2;
    printf("Decrementando em 2 unidades (-=): %d\n", dado);

    dadoSave = dado;
    dado *= 10;
    printf("Multiplicado o valor %d por 10: %d\n", dadoSave, dado);

    dadoSave = dado;
    dado /= 2;
    printf("Dividindo o valor %d por 2: %d\n", dadoSave, dado);

    return 0;
}