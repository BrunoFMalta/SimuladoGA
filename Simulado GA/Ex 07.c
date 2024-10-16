#include <stdio.h>
#include <ctype.h>

int main() {
    char caracteres[10];

    // Ler os 10 caracteres
    printf("Digite 10 caracteres:\n");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &caracteres[i]);
    }

    // Verificar cada caractere e informar seu tipo
    for (int i = 0; i < 10; i++) {
        if (isalpha(caracteres[i])) {
            printf("Caractere %d (%c) é uma letra.\n", i + 1, caracteres[i]);
        } else if (isdigit(caracteres[i])) {
            printf("Caractere %d (%c) é um número.\n", i + 1, caracteres[i]);
        } else {
            printf("Caractere %d (%c) é um símbolo especial.\n", i + 1, caracteres[i]);
        }
    }

    return 0;
}
