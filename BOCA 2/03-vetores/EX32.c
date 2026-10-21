/* O programa imprime uma linha contendo o valor da soma dos três menores
 * números */

#include <stdio.h>
#define N 4

int main() {
    int vetor[N];

    for (int i = 0; i < N; i++) {
        if (scanf("%d", &vetor[i]) != 1) {
            return 1;
        }
    }

    for (int j = 0; j < N - 1; j++) {
        for (int l = 0; l < N - 1 - j; l++) {
            if (vetor[l] > vetor[l + 1]) {
                int temp     = vetor[l];
                vetor[l]     = vetor[l + 1];
                vetor[l + 1] = temp;
            }
        }
    }

    int sum = 0;
    for (int k = 0; k < N - 1; k++) {
        sum += vetor[k];
    }
    printf("%d\n", sum);

    return 0;
}