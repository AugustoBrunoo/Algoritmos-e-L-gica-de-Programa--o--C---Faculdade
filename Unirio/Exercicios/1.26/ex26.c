#include <stdio.h>

/*
Leia dois valores de hora, minuto e segundo (h1:m1:s1, h2:m2:s2).  

Determine qual dos dois valores de hora vem antes e calcule o intervalo entre eles, também no formato de hora (hh:mm:ss). 

Por exemplo, se o primeiro valor for 09:45:38 (h1 = 9, m1 = 45, s1 = 38), 
e o segundo valor for 15:27:12 (h2 = 15, m2 = 27, s2 = 12), então o primeiro valor de hora vem antes 
e a diferença entre os dois é de 05:41:34.
*/

int main() {
    int h1, m1, s1, h2, m2, s2, transformacaoEmSeg1, transformacaoEmSeg2; 
    int diferenca, horaDir, minDir, segDir, resto;
    printf("Diferença de Horas: \n");
    printf("Digite a hora (h1): ");
    scanf("%d", &h1);
    printf("Digite o minuto (m1): ");
    scanf("%d", &m1);
    printf("Digite o segundo (s1): ");
    scanf("%d", &s1);
    printf("\n");

    transformacaoEmSeg1 = h1 * 3600 + m1 * 60 + s1;

    // Validação
    if (h1 > 23 || m1 > 60 || s1 > 60) {
        printf("O valor escolhido no primeiro horário é inválido!!\n");
        return 1;
    }

    printf("O tempo total de (T1) é: %d Segundos\n", transformacaoEmSeg1);
    printf("-----------------------------\n");
    printf("\n");

    printf("Digite a hora (h2): ");
    scanf("%d", &h2);
    printf("Digite o minuto (m2): ");
    scanf("%d", &m2);
    printf("Digite o segundo (s2): ");
    scanf("%d", &s2);
    printf("\n");

    transformacaoEmSeg2 = h2 * 3600 + m2 * 60 + s2;

    printf("O tempo total de (T2) é: %d Segundos\n", transformacaoEmSeg2);

    if (transformacaoEmSeg1 > transformacaoEmSeg2) {
        diferenca = transformacaoEmSeg1 - transformacaoEmSeg2;
    } else {
        diferenca = transformacaoEmSeg2 - transformacaoEmSeg1;
    }

    // Hora: 

    horaDir = diferenca / 3600;

    // Minuto: 

    resto = diferenca % 3600;
    minDir = resto / 60;

    // Segundos:

    segDir = resto % 60;

    printf("%02d:%02d:%d - %02d:%02d:%02d = %02d:%02d:%02d\n", h1, m1, s1, h2, m2, s2, horaDir, minDir, segDir);

    return 0;
}