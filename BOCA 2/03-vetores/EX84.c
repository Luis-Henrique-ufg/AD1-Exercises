/* Soma dos elementos de um vetor*/
#include <stdio.h>

int main() {
    int N, sum = 0;
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    int vetor[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int j = 0; j < N; j++) {
        sum += vetor[j];
    }

    printf("%d\n", sum);

    return 0;
}