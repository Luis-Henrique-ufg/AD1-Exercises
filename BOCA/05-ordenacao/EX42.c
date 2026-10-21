#include <stdio.h>

void bubble(int v[], int len);
void troca(int* x, int* y);

int main() {
    int ct, n, h;
    if (scanf("%d", &ct) != 1) {
        return 1;
    }

    while (ct--) {
        scanf("%d", &n);

        int alturas[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &alturas[i]);
        }

        bubble(alturas, n);
        for (int j = 0; j < n; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", alturas[j]);
        }

        putchar('\n');
    }
}

void bubble(int v[], int len) {
    for (int i = 1; i < len; i++) {
        for (int j = 0; j < len - i; j++) {
            if (v[j] > v[j + 1]) {
                troca(&v[j], &v[j + 1]);
            }
        }
    }
}

void troca(int* x, int* y) {
    int aux;
    aux = *x;
    *x  = *y;
    *y  = aux;
}