#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1; // Gera um número entre 1 e 100

    printf("Tente adivinhar o número sorteado (entre 1 e 100).\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite > numeroSecreto) {
            printf("Muito alto! Tente novamente.\n");
        } else if (palpite < numeroSecreto) {
            printf("Muito baixo! Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou o número.\n");
        }
    } while (palpite != numeroSecreto);

    return 0;
}
