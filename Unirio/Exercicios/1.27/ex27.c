#include <stdio.h>

/*
    Sabendo que um caixa eletrônico possui notas de R$ 1, R$ 2, R$ 5, R$ 10, R$ 20, R$ 50, e R$ 100, 
    leia um valor que representa a quantidade de dinheiro que o cliente deseja sacar e imprima a quantidade necessária 
    de cada uma dessas notas para formar o valor desejado.  
    
    A quantidade total de notas deve ser a mínima possível.

*/

int main() {
    int valorSaque, notas100 = 0, notas50 = 0, notas20 = 0, notas10= 0, notas5= 0, notas2= 0, notas1= 0;
    printf("Banco\n");
    printf("-------");
    printf("\n");
    printf("Valor do Saque: R$ ");
    scanf("%d", &valorSaque);
    
    notas100 = valorSaque / 100;
    valorSaque = valorSaque % 100;

    notas50 = valorSaque / 50;
    valorSaque = valorSaque % 50;

    notas20 = valorSaque / 20;
    valorSaque = valorSaque % 20;

    notas10 = valorSaque / 10;
    valorSaque = valorSaque % 10;

    notas5 = valorSaque / 5;
    valorSaque = valorSaque % 5;

    notas2 = valorSaque / 2;
    valorSaque = valorSaque % 2;

    notas1 = valorSaque / 1;
    
    if(notas100) printf("Notas de R$ 100: %d\n", notas100);
    if(notas50) printf("Notas de R$ 50: %d\n", notas50);
    if(notas20) printf("Notas de R$ 20: %d\n", notas20);
    if(notas10) printf("Notas de R$ 10: %d\n", notas10);
    if(notas5) printf("Notas de R$ 5: %d\n", notas5);
    if(notas2) printf("Notas de R$ 2: %d\n", notas2);
    if(notas1) printf("Notas de R$ 1: %d\n", notas1);
    
    return 0;
}