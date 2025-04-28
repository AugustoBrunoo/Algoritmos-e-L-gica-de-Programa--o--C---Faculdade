#include <stdio.h>

/*
    Leia o número da conta e o saldo de vários clientes, até o usuário digitar zero. 
    A cada entrada deverá ser apresentada a mensagem “positivo” ou “negativo”, caso o saldo seja positivo ou negativo. 
    Ao final, deverá ser impresso o percentual de contas com saldo negativo.

*/

int main() {
    int numeroDaConta = 1, contadorTotalClientes = 0, contadorClientesNegativos = 0;
    float saldoCliente = 0, percentualDeContasNegativas;

    while (numeroDaConta != 0) {
        printf("Digite o número da conta: ");
        scanf("%d", &numeroDaConta);

        if (numeroDaConta == 0) {
            printf("Programa encerrado\n");
            printf("\n");
            continue;
        }

        printf("\n");
        printf("Digite o saldo na conta: ");
        scanf("%f", &saldoCliente);

        if (saldoCliente < 0){
            contadorClientesNegativos++;
            printf("Saldo Negativo!\n");
            printf("\n");
        } else {
            printf("Saldo Positivo\n");
            printf("\n");
        }

        contadorTotalClientes++;
    }

    percentualDeContasNegativas = (float)contadorClientesNegativos / contadorTotalClientes * 100;

    printf("O percentual de contas com saldo negativo é %.2f%%\n", percentualDeContasNegativas);
    
    return 0;
}