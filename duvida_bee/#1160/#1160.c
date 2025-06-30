#include <stdio.h>

int main() {
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int pa, pb;
        double g1, g2;
        int tempo = 0;

        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        while (pa <= pb) {
            pa += (int)(pa * g1 / 100.0);

            pb += (int)(pb * g2/ 100.0);

            tempo++;
        }
        
        // printf("%d\n", tempo);

        if (tempo > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", tempo);
        }
    }
    
    return 0;
}