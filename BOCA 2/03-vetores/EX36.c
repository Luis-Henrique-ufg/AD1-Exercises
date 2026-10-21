#include <stdio.h>

int main() {
    int n, original, reverso = 0, resto;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0 || n > 99999) {
        printf("NUMERO INVALIDO\n");
        return 1;
    }

    original = n;

    while (n > 0) {
        resto   = n % 10;
        reverso = reverso * 10 + resto;
        n /= 10;
    }

    if (original == reverso) {
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }

    return 0;
}