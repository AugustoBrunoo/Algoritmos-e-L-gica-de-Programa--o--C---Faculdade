#include <stdio.h>
#include <string.h>

/*
    Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda 
    para organizar os experimentos de um laboratório o qual ela é responsável. 
    
    Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo 
    de cobaia utilizada.

    Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. 
    Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, 
    o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

    Entrada:

    1 - A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir.

    2- Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas 
    e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

    Saída:

    3 - Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual 
    de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com 
    dois dígitos após o ponto.

*/

/*
    Para comparar strings é diferente do JavaScript!

    para comparar devemos usar a biblioteca <string.h> e usar a função strcmp(string1, string2)
    resultados possiveis para a função strcmp():

    1: = 0 : As duas strings são iguais.
    2: < 0 : string1 vem antes de string2 na ordem alfabética
    3: > 0: string1 vem depois de string2 na ordem alfabética
*/

int main() {
    int numCasos = 0, quantiaAnimal, numeroTotalCobaias = 0, numeroTotalRatos = 0, numeroTotalCoelho = 0, numeroTotalSapo = 0;
    float percentualRato, percentualSapo, percentualCoelho;
    char tipoAnimal[2];

    printf("Quantos casos de teste feitos: ");
    scanf("%d", &numCasos);

    for (int i = 1; i <= numCasos; i++) {
        printf("| R - RATO | C - COELHO | S - SAPO |\n");
        printf("Diga a quantia do animal testado e seu tipo: ");
        scanf("%d %s", &quantiaAnimal, tipoAnimal);

        if (quantiaAnimal < 1 || quantiaAnimal > 15) {
            printf("Quantidade não permitida!\n");
            return 1;
        }

        numeroTotalCobaias += quantiaAnimal;

        if (strcmp(tipoAnimal, "R") == 0) {
            numeroTotalRatos += quantiaAnimal;
            printf("Animal escolhido: %s | quantia: %d \n", tipoAnimal, numeroTotalRatos);
        } else if (strcmp(tipoAnimal, "C") == 0) {
            numeroTotalCoelho += quantiaAnimal;
            printf("Animal escolhido: %s | quantia: %d \n", tipoAnimal, numeroTotalCoelho);
        } else if (strcmp(tipoAnimal, "S") == 0) {
            numeroTotalSapo += quantiaAnimal;
            printf("Animal escolhido: %s | quantia: %d \n", tipoAnimal, numeroTotalSapo);
        } else {
            printf("Animal inválido!\n");
            return 1;
        }
    }

    percentualCoelho = (double) numeroTotalCoelho / numeroTotalCobaias * 100;
    percentualRato = (double) numeroTotalRatos / numeroTotalCobaias * 100;
    percentualSapo = (double) numeroTotalSapo / numeroTotalCobaias * 100;

    printf("Total: %d cobaias\n", numeroTotalCobaias);
    printf("Total de coelhos: %d\n", numeroTotalCoelho);
    printf("Total de ratos: %d\n", numeroTotalRatos);
    printf("Total de sapos: %d\n", numeroTotalSapo);
    printf("Percentual de coelhos: %.2f%%\n", percentualCoelho);
    printf("Percentual de ratos: %.2f%%\n", percentualRato);
    printf("Percentual de sapos: %.2f%%\n", percentualSapo);

    return 0;
}