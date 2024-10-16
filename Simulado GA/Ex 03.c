#include <stdio.h>

int main() {
    int meses;
    double populacaoInicial, populacao;

    // Ler o número de meses e a população inicial
    printf("Digite o número de meses: ");
    scanf("%d", &meses);
    printf("Digite a população inicial da colmeia: ");
    scanf("%lf", &populacaoInicial);

    populacao = populacaoInicial;

    for (int i = 1; i <= meses; i++) {
        // Dobrar a população
        populacao *= 2;
        // Reduzir a população em 3% devido à migração
        populacao *= 0.97;

        // Exibir a população ao final de cada mês
        printf("Mês %d: %.2f abelhas\n", i, populacao);
    }
    
    
    
    /*pq 0.97?

0.97 representa 97%, que é o que resta depois de subtrair os 3% de migração.
Então, ao multiplicar a população por 0.97, estamos reduzindo a população em 3% para simular as abelhas que
migraram para outras colmeias. Isso mantém o cálculo simples e preciso para cada mês.

*/


    return 0;
}
