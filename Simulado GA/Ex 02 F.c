#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char caractere;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Sortear um caractere entre 'A' e 'Z'
    caractere = (rand() % (90 - 65 + 1)) + 65;

    // Imprimir o caractere sorteado
    printf("Caractere sorteado: %c\n", caractere);

    return 0;
}
