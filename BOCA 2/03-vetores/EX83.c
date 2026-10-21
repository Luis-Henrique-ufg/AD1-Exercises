#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) == 1 && N != 0) {
        int vetor[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &vetor[i]);
        }

        int maior = 0, indice = 0;
        for (int j = 0; j < N; j++) {
            maior = vetor[j];
            for (int k = 0; k < N; k++) {
                if (maior < vetor[k]) {
                    maior  = vetor[k];
                    indice = k;
                }
            }
        }
        printf("%d %d\n", indice, maior);
    }

    return 0;
}