#include <stdio.h>

int main() {
    float umidade[5];
    int irrigacao_ativada = 0;

    // Ler a umidade dos 5 sensores
    for (int i = 0; i < 5; i++) {
        printf("Digite a umidade medida pelo sensor %d (em porcentagem): ", i + 1);
        scanf("%f", &umidade[i]);
    }

    // Verificar a umidade e ativar a irrigação se necessário
    for (int i = 0; i < 5; i++) {
        if (umidade[i] < 30.0) {
            printf("Irrigação ativada pelo sensor %d com umidade de %.2f%%\n", i + 1, umidade[i]);
            irrigacao_ativada = 1;
        }
    }

    if (!irrigacao_ativada) {
        printf("A umidade está adequada. Irrigação não ativada.\n");
    }

    return 0;
}
