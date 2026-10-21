#include <stdio.h>

int main() {
    int N, K, Maiores = 0;

    do {
        scanf("%d", &N);
    } while (N < 1 || N > 1000);

    int V[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    scanf("%d", &K);

    for (int i = 0; i < N; i++) {
        if (V[i] >= K) {
            Maiores++;
        }
    }
    printf("%d\n", Maiores);

    return 0;
}