#include <stdio.h>

/*
    Leia um número inteiro n e informe se ele é divisível por 3 ou por 7.  
    Implemente duas soluções distintas, uma delas sem utilizar operações lógicas.

    Solução 2: Matemática
*/

int main() {
    int num, resultado, div3, div7;

    printf("Digite um número: ");
    scanf("%d", &num);

    div3 = (num % 3 == 0); // resposta em 0 e 1
    div7 = (num % 7 == 0);

    resultado = div3 + div7;

    printf("Resultado: %d\n", resultado);
    printf("Divisivel por 3: %s\n", div3 ? "Sim" : "Não");
    printf("Divisivel por 7: %s\n", div7 ? "Sim" : "Não");
    
}