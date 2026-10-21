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

/*
Um número é primo caso possua apenas 2 divisores: um e ele mesmo.

Vou fazer duas funções uma para verificar se é primo e outra para contar os
primos.

tmnc... não passo nessa matéria não. So quero ir para casa, não sei resolver
isso não.

A recursão é dentro do ehprimos, até encontrar -> desempilhar.

Mas contar primos precisa da ehprimo.

Deu certo e eu não sei como. Tentativa e erro mais do que lógica.


*/