#include <stdio.h>
#define N 1000

int bubble(int v[], int n);
void troca(int* x, int* y);

int main() {
    int ct, trem[N], len;

    if (scanf("%d", &ct) != 1) {
        return 1;
    }
    
    while (ct--) { 
        scanf("%d", &len);

        for (int i = 0; i < len; i++) {
            scanf("%d", &trem[i]);
        }
        printf("%d\n", bubble(trem, len));
    }
    return 0;
}

int bubble(int v[], int n) {
    int trocas = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (v[j] > v[j + 1]) {
                troca(&v[j], &v[j + 1]);
                trocas++;
            }
        }
    }
    return (trocas);
}

void troca(int* x, int* y) {
    int aux;
    aux = *x;
    *x  = *y;
    *y  = aux;
}