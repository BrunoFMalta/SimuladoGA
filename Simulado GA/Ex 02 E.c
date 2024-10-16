#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Sortear um número entre 0 e 100 que seja múltiplo de 5
    numero = (rand() % 21) * 5; // 21 porque 21*5 = 105, o que cobre o intervalo até 100

    // Imprimir o número sorteado
    printf("Número sorteado: %d\n", numero);

    return 0;
}
