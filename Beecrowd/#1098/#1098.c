#include <stdio.h>
#include <math.h>

/*
    Seguir a sequência:


    I=0 J=1
    I=0 J=2
    I=0 J=3
    I=0.2 J=1.2
    I=0.2 J=2.2
    I=0.2 J=3.2
    .
    .
    .
    I=2 J=?
    I=2 J=?
    I=2 J=?
*/

int main() {
    for (int i = 0; i <= 20; i += 2) {
        float i_float = i / 10.0;
        for (int j = 1; j <= 3; j++) {
            float j_float = j + i_float;
            
            // I
            printf("I=");
            if ((int) (i_float * 10) % 10 == 0) {
                printf("%.0f", i_float);
            } else {
                printf("%.1f", i_float);
            }
            // J
            printf(" J=");
            if ((int) (j_float * 10) % 10 == 0) {
                printf("%.0f\n", j_float);
            } else {
                printf("%.1f\n", j_float);
            }
            // printf("I=%.1f J=%.1f\n", i_float, j_float);
        }
    }
    
    return 0;
}