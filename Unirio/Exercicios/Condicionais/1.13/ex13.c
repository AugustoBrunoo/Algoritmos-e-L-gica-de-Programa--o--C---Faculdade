#include <stdio.h>

/*
    Uma empresa de paisagismo foi contratada para realizar a cobertura de um terreno retangular e 
    a instalação de uma cerca de arame farpado. 
    
    Leia o comprimento e a largura do terreno, e os preços do metro quadrado de grama e 
    do metro da cerca de arame farpado, 
    e depois calcule e imprima: 
    
    (i) o perímetro do terreno, 2 x (comprimento + largura)
    (ii) a área total a ser coberta,  (b * h)
    (iii) o custo total da grama utilizada, x = valorPorM2 * TotalGramaM2
    (iv) o custo total da cerca utilizada, y = valorPor1MDeCerca * totalDeCercaUtilizada
    e (v) o custo total do material utilizado no serviço. Soma total (x + y)
*/

int main() {
    float comprimento, largura, precoMetroQuadradoGrama, precoMetroArame;
    float perimetro, areaTotal, custoGrama, custoCerca, custoTotal;

    printf("Calculador de custos (Construção)\n");
    printf("----------------------------------\n");
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("\n");
    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("\n");
    printf("Valor do m2 da grama: ");
    scanf("%f", &precoMetroQuadradoGrama);
    printf("\n");
    printf("Valor do M de arame: ");
    scanf("%f", &precoMetroArame);

    if (precoMetroArame <= 0 || precoMetroQuadradoGrama <= 0 || largura <= 0 || comprimento <= 0) {
        printf("\n");
        printf("--------------------------------");
        printf("Digite valores maiores que zero!\n");
        return 1;
    }

    perimetro = 2 * (comprimento + largura);
    areaTotal = comprimento * largura;
    custoGrama = precoMetroQuadradoGrama * areaTotal;
    custoCerca = precoMetroArame * perimetro;
    custoTotal = custoCerca + custoGrama;

    printf("-=-=-=-==-=--=-=-==-=-=-==-=-=-=-=-\n");
    printf("O perímetro do terreno é de %.2f m\n", perimetro);
    printf("A área total a ser coberta é de %.2f m2\n", areaTotal);
    printf("O custo total da grama será de R$ %.2f\n", custoGrama);
    printf("O custo do arame farpado será de R$ %.2f\n", custoCerca);
    printf("O custo total será de R$ %.2f\n", custoTotal);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-==-=-==-=-=-=-=-=-==-=-\n");

    return 0;
}