#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Sortear um número entre -10 e 10
    numero = rand() % (10 - (-10) + 1) + (-10);

    // Imprimir o número sorteado
    printf("Número sorteado: %d\n", numero);

    return 0;
}
