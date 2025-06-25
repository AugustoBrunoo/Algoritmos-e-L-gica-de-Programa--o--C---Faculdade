#include <stdio.h>

int main() {

    int quantidadeDeAtletas;
    float grauDificuldade;
    float notasJuiz[7];
    float maiorNota = 0, menorNota = 10;

    scanf("%d", &quantidadeDeAtletas);

    float mediaAtleta[quantidadeDeAtletas];

    if (quantidadeDeAtletas < 0 || quantidadeDeAtletas > 100) {
        return 1;
    }

    // quantidade de atletas e quantidade de caracteres
    char nomeAtletas[quantidadeDeAtletas][10];

    for (int i = 0; i < quantidadeDeAtletas; i++) {
        scanf("%10s", nomeAtletas[i]);

        scanf("%f", &grauDificuldade); // 1,2 - 3,8

        if (grauDificuldade < 1.2 || grauDificuldade > 3.8) {
            return 1;
        }

        maiorNota = 0;
        menorNota = 10;

        for (int j = 0; j < 7; j++) {
            scanf("%f", &notasJuiz[j]);

            if (notasJuiz[j] > maiorNota) {
                maiorNota = notasJuiz[j];
            } 

            if (notasJuiz[j] < menorNota) {
                menorNota = notasJuiz[j];
            }
        }

        float acumulador = 0;

        // remove só 1 maior e 1 menor
        int removerMaior = 0, removerMenor = 0;

        for (int k = 0; k < 7; k++) {
            if (notasJuiz[k] == maiorNota && !removerMaior) {
                removerMaior = 1;
                continue;
            } 

            if (notasJuiz[k] == menorNota && !removerMenor) {
                removerMenor = 1;
                continue;
            }

            acumulador += notasJuiz[k];
        }
        
        mediaAtleta[i] = acumulador * grauDificuldade;
    }

    for (int i = 0; i < quantidadeDeAtletas; i++) {
        printf("%s %.2f\n", nomeAtletas[i], mediaAtleta[i]);
    }  
    
    return 0;
}