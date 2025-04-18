/*
    Leia as três notas e a quantidade de faltas de um aluno em uma disciplina e determine a situação do aluno. 
    Utilize as seguintes regras:

    As notas possuem pesos 25%, 25%, e 50% (nesta ordem);

    As três notas devem estar entre 0 e 10 (apresente uma mensagem de erro em caso de nota inválida);


    Alunos com pelo menos 8 faltas são reprovados por falta;

    Alunos com menos de 8 faltas são aprovados se tiverem média 7,0 ou maior, e reprovados se tiverem média abaixo de 4,0; 
    os demais alunos deverão fazer prova final.
*/

#include <stdio.h>


int main() {
    float nota1, nota2, nota3, media;
    int falta;

    printf("Quantidade de faltas do aluno: ");
    scanf("%d", &falta);

    if (falta > 8) {
        printf("Aluno reprovado por falta!\n");
        return 0;
    }

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    if (nota1 < 0 || nota1 > 10) {
        printf("Nota 1 Inválida\n");
        return 0;
    }

    printf("\n");
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if (nota2 < 0 || nota2 > 10) {
        printf("Nota 2 Inválida\n");
        return 0;
    }

    printf("\n");
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    if (nota3 < 0 || nota3 > 10) {
        printf("Nota 3 Inválida\n");
        return 0;
    }

    printf("\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    
    media = (0.25 * nota1) + (0.25 * nota2) + (0.50 * nota3);

    printf("\n");
    printf("Média do aluno: %.2f\n", media);

    if (media >= 7) {
        printf("Aluno aprovado!\n");
    } else if (media < 4) {
        printf("Aluno reprovado!\n");
    } else {
        printf("Aluno de prova final\n");
    }
    
    return 0;
}