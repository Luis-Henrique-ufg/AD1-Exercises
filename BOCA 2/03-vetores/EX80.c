#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) > 1000 || N < 1) {
        return 1;
    }

    int V[N];
    int Pares[1005] = {0};
    int count       = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    for (int i = 0; i < N; i++) {
        if (V[i] % 2 == 0) {
            Pares[count] = V[i];
            count++;
        }
    }
    for (int k = 0; k < count; k++) {
        printf("%d ", Pares[k]);
    }

    printf("%d", count);
    putchar('\n');

    return 0;
}