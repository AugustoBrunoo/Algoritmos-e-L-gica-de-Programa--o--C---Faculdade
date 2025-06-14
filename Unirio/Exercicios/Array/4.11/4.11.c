/*
    Leia duas sequências de 10 números inteiros e construa um vetor com 20 posições intercalando 
    os elementos das duas sequências.
*/

#include <stdio.h>

int main() {
    int seq1[10];
    int seq2[10];
    int seqTotal[20];

    int j = 10;
    for (int i = 0; i < 10; i++) {
        seq1[i] = i + 1;
        seq2[i] = j;
        j--;
    }

    // 1,3,5,7
    // 2,4,6,8
    int jSeq1 = 0;
    int jSeq2 = 0;

    for (int i = 0; i < 20; i++) {
        if(i % 2 == 0) {
            seqTotal[i] = seq1[jSeq1];
            jSeq1++;
        } else {
            seqTotal[i] = seq2[jSeq2];
            jSeq2++;
        }
    }

    for (int i = 0; i < 20; i++) {
        printf("%d ", seqTotal[i]);
    }
    printf("\n");
    
    
    return 0;
}