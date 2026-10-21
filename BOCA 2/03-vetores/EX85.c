#include <stdio.h>
#include <string.h>

int main() {
    int N;

    while (scanf("%d", &N) == 1 && N != 0) {
        int V[N];
        int M = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &V[i]);
            if (i == 0 || V[i] > M) {
                M = V[i];
            }
        }

        int freq[M + 1];
        memset(freq, 0, sizeof(freq));

        for (int i = 0; i < N; i++) {
            freq[V[i]]++;
        }

        int acc = 0;
        for (int i = 0; i <= M; i++) {
            acc += freq[i];
            printf("(%d) %d\n", i, acc);
        }
    }

    return 0;
}
