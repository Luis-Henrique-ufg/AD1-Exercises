#include <stdio.h>

#define MAX_X 100000LL

long long
calcular_polinomio(long long a, long long b, long long c, long long x);
long long
encontrar_menor_x(long long a, long long b, long long c, long long k);

int main() {
    int total_casos;

    // Lê a quantidade de casos de teste
    if (scanf("%d", &total_casos) != 1) {
        return 0;
    }

    // Processa cada caso de teste
    while (total_casos--) {
        long long a, b, c, k;

        // Lê os coeficientes do polinômio e a meta k
        scanf("%lld %lld %lld %lld", &a, &b, &c, &k);

        // Encontra o menor x0 que cumpre a condição do polinômio
        long long resposta = encontrar_menor_x(a, b, c, k);

        // Imprime a resposta para o caso atual
        printf("%lld\n", resposta);
    }

    return 0;
}

long long
encontrar_menor_x(long long a, long long b, long long c, long long k) {
    long long inicio = 0;     // Menor número natural possível (x = 0)
    long long fim    = MAX_X; // Maior valor que x precisará assumir
    long long melhor_x
        = fim; // Armazena a melhor (menor) resposta válida encontrada

    while (inicio <= fim) {
        // Evita overflow ao calcular o ponto médio: inicio + (fim - inicio) /
        // 2
        long long meio = inicio + (fim - inicio) / 2;

        // Calcula o valor do polinômio para o x atual (meio)
        long long valor = calcular_polinomio(a, b, c, meio);

        if (valor >= k) {
            // O valor atingiu a meta (>= k)!
            // Guardamos este x como um candidato válido e tentamos achar
            // um número ainda menor na metade esquerda.
            melhor_x = meio;
            fim      = meio - 1;
        } else {
            // O valor ficou abaixo da meta (< k).
            // Precisamos de um x maior, logo procuramos na metade direita.
            inicio = meio + 1;
        }
    }

    return melhor_x;
}