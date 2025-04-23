#include <stdio.h>

/*
    Escreva um programa que repita a leitura de uma senha até que ela seja válida. 
    Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". 
    Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e 
    o algoritmo encerrado. Considere que a senha correta é o valor 2002. 
*/

int main() {
    int senhaCorreta = 2002, tentativaUsuario = 0;

    while (tentativaUsuario != senhaCorreta) {
        printf("Digite a senha: ");
        scanf("%d", &tentativaUsuario);

        if (tentativaUsuario == senhaCorreta) {
            printf("Acesso Permitido\n");
        } else {
            printf("Senha Invalida\n");
        }
    }
    
    return 0;
}