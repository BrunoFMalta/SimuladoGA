#include <stdio.h>

int main() {
    int num, total = 0;
    int positivos = 0, negativos = 0, divisiveisPor2 = 0, divisiveisPor5 = 0;

    printf("Digite números inteiros (digite 0 para terminar):\n");

    do {
        scanf("%d", &num);

        if (num != 0) {
            total++;
            if (num > 0) {
                positivos++;
            } else if (num < 0) {
                negativos++;
            }
            if (num % 2 == 0) {
                divisiveisPor2++;
            }
            if (num % 5 == 0) {
                divisiveisPor5++;
            }
        }
    } while (num != 0);

    if (total > 0) {
        printf("Porcentagem de números positivos: %.2f%%\n", (positivos / (float)total) * 100);
        printf("Porcentagem de números negativos: %.2f%%\n", (negativos / (float)total) * 100);
        printf("Porcentagem de números divisíveis por 2: %.2f%%\n", (divisiveisPor2 / (float)total) * 100);
        printf("Porcentagem de números divisíveis por 5: %.2f%%\n", (divisiveisPor5 / (float)total) * 100);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    return 0;
}
