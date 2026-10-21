#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#define MAX 1001

void swap(int* x, int* y);
void bubble(int resultado[], int n);
void crivo(bool sieve[], int U);

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int V[MAX];

    for (int i = 0; i < n; i++) {
        scanf("%d", &V[i]);
    }

    int max_v = 0;
    for (int i = 0; i < n; i++) {
        if (V[i] > max_v) {
            max_v = V[i];
        }
    }

    int U = max_v * 20 + 10;
    bool prime[U + 1];

    crivo(prime, U);

    int primos[max_v];
    int cont = 0;

    for (int k = 2; k < U; k++) {
        if (prime[k] == 1 && cont < max_v) {
            primos[cont] = k;
            cont++;
        }
    }

    int resultado[n];
    for (int i = 0; i < n; i++) {
        resultado[i] = primos[V[i] - 1];
    }

    bubble(resultado, n);

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", resultado[i]);
    }

    printf("%d\n", resultado[n - 1]);
}

void crivo(bool sieve[], int U) {

    for (int i = 2; i < U; i++) {
        sieve[i] = true;
    }

    for (int p = 2; p * p < U; p++) {
        if (sieve[p] == true) {
            for (int i = p * p; i < U; i += p) {
                sieve[i] = false;
            }
        }
    }
}

void bubble(int resultado[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (resultado[j] > resultado[j + 1]) {
                swap(&resultado[j], &resultado[j + 1]);
            }
        }
    }
}

void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x   = *y;
    *y   = temp;
}