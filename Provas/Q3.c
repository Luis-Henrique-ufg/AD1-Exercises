/* Esse programa calcula o produto de todos os naturais primos a patir de uma
 * entrada*/
#include <stdio.h>

double fatorialDuplo(int n);

int main() {
    int n;
    scanf("%d", &n);

    printf("%.0f", fatorialDuplo(n));

    return 0;
}

double fatorialDuplo(int n) {
    if (n <= 1) {
        return 1.0;
    }

    if (n == 2) {
        return 1.0;
    }

    if (n % 2 == 0) {
        return fatorialDuplo(n - 1);
    }

    return n * fatorialDuplo(n - 2);
}