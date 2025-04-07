#include <stdio.h>

/*
Operadores lógicos:

Conjunção ("e" lógico) - && - é verdade quando tudo for verdade.
Disjunção ("ou" lógico) - || - É verdade se ao menos 1 for verdade.
Inversão (Negação - "Não lógico") - ! - Inverte a resposta.

*/



int main() {
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota >= 4.0 && nota < 7.0) {
        printf("Tem direito a exame!\n");
    } else if (nota > 7.0) {
        printf("Não tem direito a exame! Foi aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
    
    return 0;
}