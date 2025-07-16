#include <stdio.h>

int mult (int a, int b) {
    if (b == 0) return 0;

    if (b < 0) return -mult(a, -b);
    
    return a + mult(a, b - 1);

}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    int resultado = mult(num1, num2);

    printf("O valor do calculo é: %d\n", resultado);

    return 0;
}