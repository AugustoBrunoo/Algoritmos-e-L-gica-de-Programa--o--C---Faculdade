#include <stdio.h>

/*
    Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, 
    correspondente às quatro notas de um aluno. 
    Calcule a média com pesos 2, 3, 4 e 1, respectivamente, 
    para cada uma destas notas e mostre esta média acompanhada pela mensagem "Media: ". 
    Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". 
    Se a média calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.". 
    Se a média calculada for um valor entre 5.0 e 6.9, 
    inclusive estas, 
    o programa deve imprimir a mensagem "Aluno em exame.".

    No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno. 
    Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada. 
    Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2). 
    e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno reprovado.", 
    (caso a média tenha ficado 4.9 ou menos). 
    Para estes dois casos (aprovado ou reprovado após ter pego exame) 
    apresente na última linha uma mensagem "Media final: " seguido da média final para esse aluno.

    Média 1 : <= 7.0 (Aprovado) || < 5.0 (Reprovado) || 5.0 > x => 6.9 (Aluno em exame).
    Média 2 : M1 + Nota / 2;
    Média 2: 5.0 <= (Aprovado) || < 5.0 (Reprovado)

    Pesos: 2 * N1 + 3 * N2 + 4 * N3 + 1 * N4
*/

int main() {
    float n1, n2, n3, n4, nProvaFinal, media1, media2;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media1 = (2 * n1 + 3 * n2 + 4 * n3 + 1 * n4) / 10;

    if (media1 >= 7.0) {
        printf("Media: %.1f\n", media1);
        printf("Aluno aprovado.\n");
    } else if (media1 < 5.0) {
        printf("Media: %.1f\n", media1);
        printf("Aluno reprovado.\n");
    } else if (media1 >= 5.0 && media1 <= 6.9) {
        printf("Media: %.1f\n", media1);
        printf("Aluno em exame.\n");

        scanf("%f", &nProvaFinal);
        printf("Nota do exame: %.1f\n", nProvaFinal);
        
        media2 = (nProvaFinal + media1) / 2;

        if (media2 >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media2);
    }

    return 0;
}