/*
    Leia uma sequência de 10 números inteiros e, depois, leia um número inteiro k. 
    Verifique, nesta sequência, qual subsequência de k inteiros consecutivos possui a maior soma, 
    e imprima tanto esta soma quanto os valores dessa subsequência.
*/

#include <stdio.h>

#define N 10

int main() {
    int sequencia[N], k;

    printf("Digite a sequencia de 10 numeros:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &sequencia[i]);
    }

    while (1) {
        printf("Digite a subsequencia de numeros:\n");
        scanf("%d", &k);

        if (k > N) {
            printf("Nao pode ser um número maior que 10!\n");
            continue;
        } else {
            break;
        }
    }
    
    int numeroDeVerificacoes = N / k;

    int i = 0;
    int posicaoArraySeq = 0;
    int somaDeVetores = 0;

    while (i < numeroDeVerificacoes) {
        int arrayTemporaria[N];

        for (int j = 0; j < k; j++) {
            arrayTemporaria[j] = sequencia[posicaoArraySeq];
            posicaoArraySeq++;
            somaDeVetores += arrayTemporaria[j];

            printf("%d\n", somaDeVetores);
        }
        
    }
    
    
    return 0;
}