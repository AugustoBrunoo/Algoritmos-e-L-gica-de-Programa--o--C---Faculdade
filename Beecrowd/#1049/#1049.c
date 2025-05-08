#include <stdio.h>
#include <string.h>

int main() {
    char categoria1[12];
    char categoria2[8];
    char categoria3[11];

    scanf("%s", categoria1);
    printf("Categoria1: %s\n", categoria1);
    scanf("%s", categoria2);
    printf("Categoria2: %s\n", categoria2);
    scanf("%s", categoria3);
    printf("Categoria3: %s\n", categoria3);

    if (strcmp(categoria1, "vertebrado") == 0) {
        if (strcmp(categoria2, "ave") == 0) {

            if (strcmp(categoria3, "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(categoria3, "onivoro") == 0) {
                printf("pomba\n");
            }

        } else if (strcmp(categoria2, "mamifero") == 0) {

            if (strcmp(categoria3, "onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(categoria3, "herbivoro") == 0) {
                printf("vaca\n");
            }
        }

    } else if (strcmp(categoria1, "invertebrado") == 0){

        if (strcmp(categoria2, "inseto") == 0) {

            if (strcmp(categoria3, "hematofago") == 0) {
                printf("pulga\n");
            } else if (strcmp(categoria3, "herbivoro") == 0) {
                printf("lagarta\n");
            }

        } else if (strcmp(categoria2, "anelideo") == 0) {

            if (strcmp(categoria3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else if (strcmp(categoria3, "onivoro") == 0) {
                printf("minhoca\n");
            }
        }

    }

    return 0;
}