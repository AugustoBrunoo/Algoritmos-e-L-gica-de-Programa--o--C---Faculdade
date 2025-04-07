// scanf() , lê o que o usuário escreve e armazena em uma variavel,
// seria tipo o prompt

// Como funciona:
// deve colocar o & (e comercial) antes da variável
// scanf("tipo do dado", &"variável");

// no scanf() vc pode colocar mais de uma variavel
#include <stdio.h>
#include <stdlib.h>

int main() {
        int idade = 0;

        printf("Valor inicial da idade: %d.\n", idade);
        printf("Digite uma idade: \n");
        scanf("%d", &idade);

        printf("Idade informada: %d. \n", idade);
    return 0;
}