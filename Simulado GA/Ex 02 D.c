#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float numero;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Sortear um número entre 10.5 e 50.2 com uma casa decimal
    numero = (rand() / (float)RAND_MAX) * (50.2 - 10.5) + 10.5;
    numero = ((int)(numero * 10)) / 10.0; // Ajustar para uma casa decimal

    // Imprimir o número sorteado
    printf("Número sorteado: %.1f\n", numero);

    return 0;
}
