#include <stdio.h>
#include <stdbool.h>

#define N 3

int main() {
    double numeros[N];

    for (int i = 0; i < N; i++) {
        scanf("%lf", &numeros[i]);
    }

    for (int j = 0; j < N - 1; j++) {
        if (numeros[j] > numeros[j + 1]) {

            double temp    = numeros[j];
            numeros[j]     = numeros[j + 1];
            numeros[j + 1] = temp;
        }
    }

    for (int k = 0; k < N; k++) {

        if (k == N - 1) {
            printf("%.2f", numeros[k]);
            return 0;
        }

        printf("%.2f, ", numeros[k]);
    }
    return 0;
}