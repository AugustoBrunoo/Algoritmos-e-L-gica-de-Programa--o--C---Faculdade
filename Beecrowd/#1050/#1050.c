#include <stdio.h>

/*
    Leia um número inteiro que representa um código de DDD para discagem interurbana. 
    Em seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:

    61 - Brasília 
    71 - Salvador 
    11 - São Paulo
    21 - Rio de Janeiro
    32 - Juíz de Fora
    19 - Campinas
    27 - Vitória
    31 - Belo Horizonte

    Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
    DDD não cadastrado
*/

int main() {
    int ddd;

    printf("Digite o DDD para Discagem Interurbana: ");
    scanf("%d", &ddd);

    switch (ddd) {
        case 61:
            printf("Brasília\n");
            break;
    
        case 71:
            printf("Salvador\n");
            break;

        case 11:
            printf("São Paulo\n");
            break;

        case 21:
            printf("Rio de Janeiro\n");
            break;

        case 32:
            printf("Juíz de Fora\n");
            break;

        case 19:
            printf("Campinas\n");
            break;

        case 27:
            printf("Vitória\n");
            break;

        case 31:
            printf("Belo Horizonte\n");
            break;
            
        default:
            printf("DDD não cadastrado\n");
            break;
    }

    return 0;
}