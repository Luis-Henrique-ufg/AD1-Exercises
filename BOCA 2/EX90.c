#include <stdio.h>

#define MAX 1005

void swap(int* x, int* y);
void bubble(int vetor[], int n);

int main() {
    int N;
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    int V[MAX];
    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    bubble(V, N);

    for (int i = 0; i < N; i++) {
        printf("%d\n", V[i]);
    }
}

void bubble(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                swap(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x   = *y;
    *y   = temp;
}