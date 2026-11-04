#include <stdio.h>

int ehprimo(int n, int divisor);
int contarprimos(int x, int y);

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n", contarprimos(x, y));

    return 0;
}

int ehprimo(int n, int divisor) {
    if (n < 2) {
        return 0;
    }

    if (divisor * divisor > n) {
        return 1;
    }

    if (n % divisor == 0) {
        return 0;
    }

    return ehprimo(n, divisor + 1);
}

int contarprimos(int x, int y) {
    if (x > y) {
        return 0;
    }

    if (ehprimo(x, 2)) {
        return 1 + contarprimos(x + 1, y);
    } else {
        return contarprimos(x + 1, y);
    }
}
