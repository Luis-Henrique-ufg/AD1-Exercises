#include <stdio.h>
#define MAX_BITS 32

int main() {
    unsigned int n;

    while (scanf("%u", &n) == 1) {
        if (n == 0) {
            printf("0\n");
            continue;
        }
        int bits[MAX_BITS];
        int tam = 0;

        while (n > 0) {
            bits[tam++] = n % 2;
            n /= 2;
        }

        for (int i = tam - 1; i >= 0; i--) {
            printf("%d", bits[i]);
        }
        printf("\n");
    }
    return 0;
}
