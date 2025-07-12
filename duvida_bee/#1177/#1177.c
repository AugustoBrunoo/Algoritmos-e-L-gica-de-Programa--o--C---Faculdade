#include <stdio.h>
#define N 61

int main() {
    int c;

    scanf("%d", &c);

    unsigned long long int vResultado[c];

    for (int i = 0; i < c; i++) {
        scanf("%lld", &vResultado[i]);

        if (vResultado[i] > 60) {
            return 1;
        }
    }

    unsigned long long int fibbonacci[N];

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            fibbonacci[i] = 0;
        } else if (i == 1) {
            fibbonacci[i] = 1;
        } else {
            unsigned long long int antepenultimo = fibbonacci[i - 2];
            unsigned long long int ultimo = fibbonacci[i - 1];

            fibbonacci[i] = antepenultimo + ultimo;
        }
    }
    
    for (int i = 0; i < c; i++) {
        printf("Fib(%lld) = %lld\n", vResultado[i], fibbonacci[vResultado[i]]);
    }
    
    return 0;
}