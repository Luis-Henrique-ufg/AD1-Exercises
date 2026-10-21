#include <stdio.h>
#include <stdbool.h>

unsigned long long fibonacci(unsigned long long n);
void fatores(unsigned long long n);

int main() {
    unsigned long long ct;
    scanf("%lld", &ct);

    unsigned long long vetor[ct];

    for (unsigned long long i = 0; i < ct; i++) {
        scanf("%lld", &vetor[i]);
    }

    for (unsigned long long i = 0; i < ct; i++) {
        unsigned long long aux;
        aux = fibonacci(vetor[i]);
        fatores(aux);
    }

    return 0;
}

// fibonacci iterativo
unsigned long long fibonacci(unsigned long long n) {
    unsigned long long atual, proximo, anterior;

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
    for (unsigned long long i = 3; i <= n; i++) {
        proximo  = anterior + atual;
        anterior = atual;
        atual    = proximo;
    }
    return atual;
}

void fatores(unsigned long long n) {

    bool primeiro = true;

    for (unsigned long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            if (!primeiro) {
                printf(" ");
            }

            printf("%lld", i);
            primeiro = false;
            n /= i;
        }
    }
    if (n > 1) {
        if (!primeiro) {
            printf(" ");
        }
        printf("%lld", n);
    }
    putchar('\n');
}