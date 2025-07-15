// Manipulação de mais uma string em um vetor

#include <stdio.h>

#define quantidadeDeStrings 3 // -> pode deixar vazio caso não saiba o tamanho exato
#define numeroDeCaracteres 20


int main() {
    // Se precisa ser não modificável:

    const char *nomes[] = {"Augusto", "Pedro", "Nathan"};

    printf("Matrizes de Strings (Não modificável): %s\n", nomes[0]); // --> Funciona!

    // Se precisa ser modificável

    char nomes2[quantidadeDeStrings][numeroDeCaracteres] = {"Rita", "Sheila", "Fernanda"};

    printf("Matrizes de Strings (Modificável): %s\n", nomes2[1]);

    return 0;
}