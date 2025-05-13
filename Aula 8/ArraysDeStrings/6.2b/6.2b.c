#include <stdio.h>

int main() {
    char s[10];

    printf("Digite algo (leitura pelo gets):\n");
    gets(s);
    puts("Resultado:");
    puts(s);
    puts("");
    
    return 0;
}