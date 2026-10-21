#include <stdio.h>

#define MAX 1001

void insertionSort(int v[], int n);

int main() {
    int n, l, k;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int vetor[MAX];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    if (scanf("%d %d", &l, &k) != 2) {
        return 1;
    }

    insertionSort(vetor, n);

    printf("%d", vetor[k - 1] + vetor[l - 1]);

    putchar('\n');

    return 0;
}

void insertionSort(int v[], int n) {
    for (int i = 0; i < n; i++) {
        int chave = v[i];
        int j     = i - 1;
        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = chave;
    }
}