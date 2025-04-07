#include <stdio.h>

// continue passa adiante um laço de repeticao 

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
            // perceba que o 5 não foi impresso, pulando adiante para o 6.
        }
        printf("Número: %d\n", i);
    }
    
    return 0;
}