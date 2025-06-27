#include <stdio.h>
#include <string.h>

/*
    Leia duas linhas de texto (denominadas texto e padrao) e 
    determine a posição em que padrao ocorre, como substring, 
    dentro de texto. 
    
    Por exemplo: o padrão “Prog” ocorre 
    dentro do texto “Algoritmos e Programação” a partir da posição 13. 
    (Se padrão ocorrer múltiplas vezes dentro de texto, considere 
    apenas a primeira ocorrência. Se padrao não ocorrer dentro de texto, 
    imprima -1.)
*/

int main() {
    char texto[50];
    char padrao[50];

    fgets(texto, sizeof(texto), stdin);
    
    int tamanhoTexto = strlen(texto);

    

    if (texto[tamanhoTexto - 1] == '\n') {
        texto[tamanhoTexto - 1] = '\0';
        tamanhoTexto--;
    }

    scanf("%s", padrao);
    int tamanhoPadrao = strlen(padrao);

    int j = 0;
    int posicao;
    int contadorSim = 0;

    for (int i = 0; i < tamanhoTexto; i++) {
        if (contadorSim == tamanhoPadrao) break;

        if (texto[i] == padrao[j]) {
            if (j == 0) {
                posicao = i;
            }

            contadorSim++;
            j++;
        } else if (texto[i] != padrao[j] && j > 0) {
            j = 0;
            contadorSim = 0;
        }
    }


    if (contadorSim == tamanhoPadrao) {
        printf("Posição: %d\n", posicao);
    } else {
        printf("-1\n");
    }
    
    
    return 0;
}