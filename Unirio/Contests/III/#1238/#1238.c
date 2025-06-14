#include <stdio.h>
#include <string.h>

#define N 50

int main() {
    int quantidadeTeste;
    
    scanf("%d", &quantidadeTeste);

    char palavra1[N + 1];
    char palavra2[N + 1];

    for (int i = 0; i < quantidadeTeste; i++) {
        scanf("%s %s", palavra1, palavra2);
        
        // puts(palavra1);
        // puts(palavra2);

        int length1 = strlen(palavra1);
        int length2 = strlen(palavra2);

        int i1 = 0, i2 = 0;

        while (i1 < length1 || i2 < length2) {
            if (i1 < length1) {
                printf("%c", palavra1[i1]);
                i1++;
            }

            if (i2 < length2) {
                printf("%c", palavra2[i2]);
                i2++;
            }
        }
        printf("\n");
    }
    

    return 0;
}