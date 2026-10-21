#include <stdio.h>
#include <stdbool.h>

#define N 105

void troca(int* x, int* y);
void bubble(int v[], int len);

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int vetor[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int pares[N];
    int impares[N];

    int np = 0, ni = 0;
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            pares[np++] = vetor[i];
        } else {
            impares[ni++] = vetor[i];
        }
    }

    // imprimir pares:
    bubble(pares, np);
    if (np > 0) {
        for (int i = 0; i < np; i++) {
            if (i > 0) {
                printf(" ");
            }
            printf("%d", pares[i]);
        }
        putchar('\n');
    }

    // imprimir impares
    if (ni > 0) {
        bubble(impares, ni);
        for (int i = ni - 1; i >= 0; i--) {
            if (i < ni - 1) {
                printf(" ");
            }
            printf("%d", impares[i]);
        }
    }
}

void bubble(int v[], int len) {
    for (int i = 1; i < len; i++) {
        for (int j = 0; j < len - i; j++) {
            if (v[j] > v[j + 1]) {
                troca(&v[j], &v[j + 1]);
            }
        }
    }
}

void troca(int* x, int* y) {
    int aux;
    aux = *x;
    *x  = *y;
    *y  = aux;
}