#include <stdio.h>
#include <string.h>
#include <ctype.h>


/*
    Leia uma string e substitua as letras maiúsculas que ocorrem nessa string pelas letras minúsculas 
    correspondentes. 

    (Dica: como verificar se um caractere é uma letra maiúscula? Caso seja, 
    como obter a letra minúscula correspondente?)

    Funções tolower/toupper são retornaveis, precisando devolver a minuscula.
*/


int main() {
    char palavra[20];

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    for (int i = 0; i < 20; i++) {
        if(isupper(palavra[i])) {
            palavra[i] = tolower(palavra[i]);
        }
    }

    printf("%s", palavra);
    

    return 0;
}