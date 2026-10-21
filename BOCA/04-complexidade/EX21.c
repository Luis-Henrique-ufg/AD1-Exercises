#include <stdio.h>
#include <string.h>
#include <limits.h>

int valor[6] = {2, 5, 10, 20, 50, 100};
long long N[6];
long long S;

long long memo[7][5001];
int calculado[7][5001];
int escolhaK[7][5001];

const long long INF = LLONG_MAX / 2;

int minimizar(int i, long long s);

int main() {
    scanf("%lld", &S);
    for (int i = 0; i < 6; i++) {
        scanf("%lld", &N[i]);
    }

    memset(calculado, 0, sizeof(calculado));

    minimizar(0, S);

    long long s = S;
    int resultado[6];
    for (int i = 0; i < 6; i++) {
        int k        = escolhaK[i][s];
        resultado[i] = k;
        s -= (long long)k * valor[i];
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", resultado[i]);
        printf("\n");
    }
    return 0;
}

int minimizar(int i, long long s) {
    if (i == 6) {
        return (s == 0) ? 0 : INF;
    }

    if (calculado[i][s]) {
        return memo[i][s];
    }

    long long maxK = s / valor[i];
    if (maxK > N[i]) {
        maxK = N[i];
    }

    long long melhor = INF;
    int melhorK      = 0;
    for (long long k = 0; k <= maxK; k++) {
        long long resto = minimizar(i + 1, s - k * valor[i]);
        if (resto < INF / 2) {
            long long candidato = resto + k;
            if (candidato < melhor) {
                melhor  = candidato;
                melhorK = (int)k;
            }
        }
    }

    calculado[i][s] = 1;
    memo[i][s]      = melhor;
    escolhaK[i][s]  = melhorK;
    return melhor;
}