#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    int V[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    bool ultimo = false;
    for (int i = 0; i < N; i++) {
        printf("%d", V[i]);
        if (!ultimo) {
            printf(" ");
        }
    }

    putchar('\n');

    ultimo = false;
    for (int j = N - 1; j >= 0; j--) {
        printf("%d", V[j]);
        if (!ultimo) {
            printf(" ");
        }
    }

    putchar('\n');

    int maior = V[0];
    int menor = V[0];
    for (int i = 0; i < N; i++) {
        if (V[i] > maior) {
            maior = V[i];
        }
        if (V[i] < menor) {
            menor = V[i];
        }
    }
    printf("%d\n", maior);
    printf("%d\n", menor);
}