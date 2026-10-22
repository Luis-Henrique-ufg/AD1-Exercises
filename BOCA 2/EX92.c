#include <stdio.h>
#include <stdlib.h>

#define N 1000000

int cmp(const void* a, const void* b);

int main() {
    int n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    long long* amostra = malloc(n * sizeof(long long));

    for (int i = 0; i < n; i++) {
        scanf("%lld", &amostra[i]);
    }

    qsort(amostra, n, sizeof(long long), cmp);

    double mediana = 0;

    if (n % 2 == 0) {
        int mid = n / 2;
        mediana = ((double)amostra[mid - 1] + amostra[mid] / 2.0);
    } else {
        mediana = (double)amostra[n / 2];
    }

    printf("%.2f\n", mediana);

    free(amostra);
    return 0;
}

int cmp(const void* a, const void* b) {
    long long x = *(const long long*)a;
    long long y = *(const long long*)b;

    if (x < y) {
        return -1;
    }
    if (x > y) {
        return 1;
    }
    return 0; 
}
