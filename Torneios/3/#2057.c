#include <stdio.h>
#include <stdlib.h>

// hora de saída, tempo de viagem e o fuso do destino com relação a origem

int main() {
    int horaSaida, tempoViagem, fusoHorario, tempoFinal;

    scanf("%d %d %d", &horaSaida, &tempoViagem, &fusoHorario);

    tempoFinal = horaSaida + tempoViagem + fusoHorario;

    if (tempoFinal >= 24) {
        tempoFinal = tempoFinal - 24;
    } else if (tempoFinal < 0) {
        tempoFinal = 24 + tempoFinal;
    }

    printf("%d\n", tempoFinal);
    return 0;
}