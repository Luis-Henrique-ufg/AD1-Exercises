#include <stdio.h>
#include <string.h>

#define MAX_N 101
#define MAX_DIGITS 30

static int fib[MAX_N][MAX_DIGITS];

void precalcular(void) {
    memset(fib, 0, sizeof(fib));
    fib[1][0] = 1;
    fib[2][0] = 1;

    for (int i = 3; i <= 100; i++) {
        int carry = 0;
        for (int j = 0; j < MAX_DIGITS; j++) {
            int soma = fib[i - 1][j] + fib[i - 2][j] + carry;
            fib[i][j] = soma % 10;
            carry = soma / 10;
        }
    }
}

void imprimir_fibonacci(int n) {
    int pos = MAX_DIGITS - 1;
    while (pos > 0 && fib[n][pos] == 0) {
        pos--;
    }
    for (; pos >= 0; pos--) {
        printf("%d", fib[n][pos]);
    }
    printf("\n");
}

int main(void) {
    precalcular();

    int k;
    while (scanf("%d", &k) == 1) {
        for (int i = 0; i < k; i++) {
            int n;
            if (scanf("%d", &n) == 1) {
                imprimir_fibonacci(n);
            }
        }
    }

    return 0;
}