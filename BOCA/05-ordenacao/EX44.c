#include <stdio.h>
#include <stdlib.h>

#define MAX 1001

void swap(int* x, int* y);
int insertionSort(int v[], int n);
int selectSort(int v[], int n);

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int vetor[MAX];
    int copia[MAX];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int j = 0; j < n; j++) {
        copia[j] = vetor[j];
    }

    printf("%d\n", insertionSort(vetor, n) - selectSort(copia, n));

    return 0;
}

int insertionSort(int v[], int n) {
    int trocasIns = 0;
    for (int i = 1; i < n; i++) {
        int chave = v[i];
        int j     = i - 1;
        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            trocasIns++;
            j--;
        }
        v[j + 1] = chave;
        trocasIns++;
    }
    return trocasIns;
}

int selectSort(int v[], int n) {
    int trocasSelect = 0;
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(&v[i], &v[min_idx]);
            trocasSelect++;
        }
    }
    return trocasSelect;
}

void swap(int* x, int* y) {
    int temp = 0;

    temp = *x;
    *x   = *y;
    *y   = temp;
}

/*

Exemplos


Entrada
20
33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52

Saída
19


Entrada
20
52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33

Saída
199

Entrada
10
8 6 4 3 2 1 7 9 5 10

Saída
23
*/