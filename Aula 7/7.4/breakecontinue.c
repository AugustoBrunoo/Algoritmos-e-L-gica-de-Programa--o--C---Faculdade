#include <stdio.h>

/*
break encerra as estruturas de repetição por completo
continue, passa um laço de repetição (avança)
*/

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("Numero: %d\n", i);

        if (i == 5) {
            break;
        }
        
    }
    return 0;
}