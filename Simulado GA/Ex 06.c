#include <stdio.h>

int main() {
    int tempo[7];
    int totalTempo = 0;
    float mediaTempo;
    int diaMaiorTempo = 0;

    // Ler o tempo de exercício realizado por 7 dias consecutivos
    printf("Digite o tempo de exercício realizado por 7 dias consecutivos (em minutos):\n");
    for (int i = 0; i < 7; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%d", &tempo[i]);
        totalTempo += tempo[i];
        if (tempo[i] > tempo[diaMaiorTempo]) {
            diaMaiorTempo = i;
        }
    }

    // Calcular a média de tempo diário
    mediaTempo = totalTempo / 7.0;

    // Exibir os resultados
    printf("Total de tempo exercitado na semana: %d minutos\n", totalTempo);
    printf("Média de tempo diário: %.2f minutos\n", mediaTempo);
    printf("Dia com maior tempo de exercício: Dia %d (%d minutos)\n", diaMaiorTempo + 1, tempo[diaMaiorTempo]);

    return 0;
}
