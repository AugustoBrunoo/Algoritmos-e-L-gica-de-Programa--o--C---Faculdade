#include <stdio.h>

int main() {
    int num1, num2, num3;
    int maiorNum, numMeio, numFim;

    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        if (num2 > num3) {
            maiorNum = num1;
            numMeio = num2;
            numFim = num3;
        } else {
            maiorNum = num1;
            numMeio = num3;
            numFim = num2;
        }

    } else if (num2 > num1 && num2 > num3) {
        if (num1 > num3) {
            maiorNum = num2;
            numMeio = num1;
            numFim = num3;
        } else {
            maiorNum = num2;
            numMeio = num3;
            numFim = num1;
        }

    } else {
        if (num2 > num1) {
            maiorNum = num3;
            numMeio = num2;
            numFim = num1;
        } else {
            maiorNum = num3;
            numMeio = num1;
            numFim = num2;
        }
    }

    printf("%d\n", numFim);
    printf("%d\n", numMeio);
    printf("%d\n", maiorNum);
    printf("\n");
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    return 0;
}