/*
Entrada:
int N 1-10000
vetor[N] 0 - 10

Saída:
Nota e frequência da última nota informada
*/

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

    int ultimo = vetor[N - 1];
    int count  = 0;

    for (int j = 0; j < N; j++) {
        if (vetor[j] == ultimo) {
            count++;
        }
    }

    int maior  = vetor[0];
    int indice = 0;
    for (int k = 0; k < N; k++) {
        if (vetor[k] > maior) {
            maior  = vetor[k];
            indice = k;
        }
    }
    printf("Nota %d, %d vezes\n", ultimo, count);
    printf("Nota %d, indice %d\n", maior, indice);

    return 0;
}