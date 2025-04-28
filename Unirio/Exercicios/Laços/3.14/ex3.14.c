#include <stdio.h>

/*
    Leia várias idades até o usuário digitar zero e imprima quantas pessoas são eleitoras obrigatórias.

*/

int main() {
    int numPessoas = 0, pessoaIdade = 1;

    while (pessoaIdade != 0){
        printf("Digite 0 para encerrar!\n");
        printf("Digite a idade do cidadão: ");
        scanf("%d", &pessoaIdade);

        if (pessoaIdade >= 18) {
            numPessoas++;
        }
    }

    printf("%d pessoas são eleitoras obrigatórias\n", numPessoas);
    
    return 0;
}