/*
do while: 
Com o do while, o comando é executado pelo menos uma vez.
Ele primeiro faz e depois verifica se deve fazer novamente.

depois do while, deve colocar ;
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1;

    do {
        printf("Número: %d\n", i);
        i++;
    } while (i <= 10);
    
    return 0;
}
