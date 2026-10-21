#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) {
        return 1;
    }
    int V[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    for (int j = N - 1; j >= 0; j--) {
        printf("%d ", V[j]);
    }

    putchar('\n');

    return 0;
}