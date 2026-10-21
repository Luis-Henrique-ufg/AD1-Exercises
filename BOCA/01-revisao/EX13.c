#include <stdio.h>

long long fibonacci(long long n);

int main() {
    long long ct;
    scanf("%lld", &ct);

    long long vetor[ct];

    for (long long i = 0; i < ct; i++) {
        scanf("%lld", &vetor[i]);
    }

    for (long long i = 0; i < ct; i++) {
        printf("%lld\n", fibonacci(vetor[i]));
    }

    return 0;
}

// fibonacci iterativo
long long fibonacci(long long n) {
    long long atual, proximo, anterior;

    if (n == 0) {
        return 0;
    }
    if (n == 1 || n == 2) {
        return 1;
    }
    anterior = 1;
    atual    = 1;
    proximo  = 0;

    // começa no índice 3, colocando a soma lá.
    for (long long i = 3; i <= n; i++) {
        proximo  = anterior + atual;
        anterior = atual;
        atual    = proximo;
    }
    return atual;
}

