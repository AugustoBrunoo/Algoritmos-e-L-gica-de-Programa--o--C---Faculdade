#include <stdio.h>
#include <string.h>
#define N 50

/*
    Leia duas strings e um índice i, e construa uma nova string 
    inserindo a segunda string na primeira a partir do índice i 
    (o restante da primeira string deve ser deslocado à frente conforme 
    necessário). 
    
    Por exemplo, para duas strings “primeira” e “segunda” e o índice 3, 
    o resultado deve ser a string “prisegundameira”.
*/

void retirarN (char *string) {
    int tamanho = strlen(string);

    if (string[tamanho - 1] == '\n') {
        string[tamanho - 1] = '\0';
        tamanho--;
    }
}

int main() {
    char s1[N];
    char s2[N];
    int indice;

    fgets(s1, sizeof(s1), stdin);
    int tamanhoS1 = strlen(s1);

    retirarN(s1);

    fgets(s2, sizeof(s2), stdin);
    
    retirarN(s2);
    
    scanf("%d", &indice);

    for (int i = 0; i < tamanhoS1; i++) {
        if (i == indice) {
            printf("%s", s2);
            printf("%c", s1[i]);
        } else {
            printf("%c", s1[i]);
        }
    }
    
    printf("\n");


    return 0;
}