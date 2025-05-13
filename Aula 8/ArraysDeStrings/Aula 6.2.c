#include <stdio.h>

int main() {
    char s[14];

    printf("Digite seu nome (scanf comum): \n");
    scanf("%s", s);
    fflush(stdin);
    printf("Resultado: %s\n\n", s);

    printf("Digite seu nome (scanf aprimorado): \n");
    scanf("%13[^\n]", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);
    return 0;
}