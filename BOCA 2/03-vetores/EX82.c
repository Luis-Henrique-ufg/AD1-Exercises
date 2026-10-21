#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    int vetor[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int j = 0; j < N; j++) {
        printf("%d", vetor[j]);
        if (j != N - 1){
            printf(" ");
        }
    }

    putchar('\n');

    return 0;
}