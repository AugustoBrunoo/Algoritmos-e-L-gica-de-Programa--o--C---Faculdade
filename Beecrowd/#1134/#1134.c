#include <stdio.h>

/*
    Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. 
    Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 
    
    1.Álcool 
    2.Gasolina 
    3.Diesel 
    4.Fim

    Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código 
    (até que seja válido). O programa será encerrado quando o código informado for o número 4.
*/

/*
    while(1) é a mesma coisa que o while (true) em JS, um loop infinito
*/
int main() {
    int escolhaUsuario = 0, contadorAlcool = 0, contadorGasolina = 0, contadorDiesel = 0;

    printf("1. Álcool \n");
    printf("2. Gasolina\n");
    printf("3. Diesel \n");
    printf("4. Fim\n");

    while (1) {
        printf("Digite qual é o melhor combustível para você: ");
        scanf("%d", &escolhaUsuario);

        if (escolhaUsuario == 4) {
            break;
        }
        
        switch (escolhaUsuario) {
            case 1:
                contadorAlcool++;
                break;
            case 2: 
                contadorGasolina++;
                break;
            case 3:
                contadorDiesel++;
                break;

            default:
                continue;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", contadorAlcool);
    printf("Gasolina: %d\n", contadorGasolina);
    printf("Diesel: %d\n", contadorDiesel);
    
    return 0;
}