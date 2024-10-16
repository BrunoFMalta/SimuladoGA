#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Sortear um número entre -20 e -5
    numero = rand() % (-5 - (-20) + 1) + (-20);

    // Imprimir o número sorteado
    printf("Número sorteado: %d\n", numero);

    return 0;
}
