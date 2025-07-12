#include <stdio.h>

struct tipo_aluno {
    int inscricao;
    double nota;
};

typedef struct tipo_aluno tipo_aluno;

int main() {
    int qtd;

    scanf("%d", &qtd);

    tipo_aluno alunos[qtd];

    for (int i = 0; i < qtd; i++) {
        scanf("%d %lf", &alunos[i].inscricao, &alunos[i].nota);
    }

    double maiorNota = alunos[0].nota;
    int flagi = 0;

    for (int i = 1; i < qtd; i++) {
        if (maiorNota < alunos[i].nota) {
            maiorNota = alunos[i].nota;
            flagi = i;
        }
    }
    
    if (maiorNota >= 8.0) {
        printf("%d\n", alunos[flagi].inscricao);
    } else {
        printf("Minimum note not reached\n");
    }
    
    return 0;
}