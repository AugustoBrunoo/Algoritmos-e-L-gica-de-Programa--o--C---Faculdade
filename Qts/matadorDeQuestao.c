#include <stdio.h>
#include <stdlib.h>

int main() {
    int casos;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        int num;

        scanf("%d", &num);

        int flagNP = 0;

        if (num < 2) {
            flagNP = 1; // 0 e 1 não sao primos
        } else {
            for (int j = 2; j <= num / 2; j++) {
                if (num % j == 0) {
                    flagNP = 1;
                    break;
                }
            }
        }

        if (!flagNP) {
            printf("%d eh primo\n", num);
        } else {
            printf("%d nao eh primo\n", num);
        }
        
    }
    
    return 0;
}