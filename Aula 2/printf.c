#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Olá, tenho 22 anos e programo\n");

    printf("Valor inteiro: %d. \n",10); // número inteiro 
    printf("Valor real: %f. \n", 3.14159265); // todo o número
    printf("Valor real com apenas duas casas: %.2f. \n", 3.14159265); // após o ponto: duas casas decimais
    printf("Dado de texto: %c. \n", 'a'); // um caractere da string
    printf("Dado de texto: %s. \n", "testando"); // toda a string
    return 0;
}