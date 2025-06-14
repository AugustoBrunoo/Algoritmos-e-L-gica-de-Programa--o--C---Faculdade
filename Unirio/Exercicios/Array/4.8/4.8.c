/*
    Em uma sequência de números inteiros, um mínimo local (resp. máximo local) é um número estritamente menor 
    (resp. estritamente maior) que seus vizinhos imediatos na sequência (ou seu único vizinho, para os elementos 
    nas pontas.

    Leia uma sequência de 10 números inteiros e imprima todos os números, indicando caso cada um deles 
    seja mínimo local ou máximo local.
*/

#include <stdio.h>


int main() {
    int seqNum[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &seqNum[i]);
    }
    
    printf("\n");

    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            if (seqNum[i] > seqNum[i + 1]) {
                printf("%d (Máximo local)\n", seqNum[i]);
            } else if (seqNum[i] < seqNum[i + 1]){
                printf("%d (Mínimo local)\n", seqNum[i]);
            } else {
                printf("%d\n", seqNum[i]);
            }
        } else if (i == 9) {
            if (seqNum[i] > seqNum[i - 1]) {
                printf("%d (Máximo local)\n", seqNum[i]);
            } else if (seqNum[i] < seqNum[i - 1]){
                printf("%d (Mínimo local)\n", seqNum[i]);
            } else {
                printf("%d\n", seqNum[i]);
            }
        } else {
            if (seqNum[i] > seqNum[i - 1] && seqNum[i] > seqNum[i + 1]) {
                printf("%d (Máximo local)\n", seqNum[i]);
            } else if (seqNum[i] < seqNum[i - 1] && seqNum[i] < seqNum[i + 1]){
                printf("%d (Mínimo local)\n", seqNum[i]);
            } else {
                printf("%d\n", seqNum[i]);
            }
        }
    }
    
    return 0;
}