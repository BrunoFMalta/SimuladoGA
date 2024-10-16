#include <stdio.h>

int main() {
    float chuva[7];
    float totalChuva = 0;
    int diaMaiorChuva = 0;

    // Ler os registros diários de chuva para uma semana
    printf("Digite a quantidade de chuva (em mm) para cada dia da semana:\n");
    for (int i = 0; i < 7; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%f", &chuva[i]);
        totalChuva += chuva[i];
        if (chuva[i] > chuva[diaMaiorChuva]) {
            diaMaiorChuva = i;
        }
    }

    // Informar o total de chuva acumulada
    printf("Total de chuva acumulada na semana: %.2f mm\n", totalChuva);

    // Informar o dia com maior quantidade de chuva
    printf("Dia com maior quantidade de chuva: Dia %d (%.2f mm)\n", diaMaiorChuva + 1, chuva[diaMaiorChuva]);

    // Verificar e exibir mensagem de alerta se a chuva foi menor que 5 mm em algum dia
    for (int i = 0; i < 7; i++) {
        if (chuva[i] < 5) {
            printf("Alerta: Possível seca no dia %d com %.2f mm de chuva.\n", i + 1, chuva[i]);
        }
    }

    return 0;
}
