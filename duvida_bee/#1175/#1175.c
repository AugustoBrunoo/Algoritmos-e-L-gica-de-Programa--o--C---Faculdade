#include <stdio.h>
#define N 20

int main() {
    int v[N];
    int aux;

    for (int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }
    
    for (int i = 0; i < N / 2; i++) { /*Metade pois se fazer do tamanho normal, ele retoma ao vetor original*/
        int posFinal = N - 1;
        aux = v[i];
        v[i] = v[posFinal - i];
        v[posFinal - i] = aux;
    }

    for (int i = 0; i < N; i++) {
        printf("N[%d] = %d\n", i, v[i]);
    }
    
    

    return 0;
}