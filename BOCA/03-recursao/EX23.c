#include <stdio.h>

void hanoi(int n, char origem, char destino, char auxiliar);

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    hanoi(n, 'O', 'D', 'A');
}

void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("(%c,%c)\n", origem, destino);
        return;
    }
    // Passo 1: move n - 1 discos de origem para auxiliar.
    // O destino vira o "auxiliar" deste subproblema.
    hanoi(n - 1, origem, auxiliar, destino);

    // Passo 2: move o maior disco (o último) direto para o destino.
    printf("(%c,%c)\n", origem, destino);

    // Passo 3: move os n-1 discos que estão no auxiliar para o destino.
    // A origem vira o "auxiliar" deste subproblema
    hanoi(n - 1, auxiliar, destino, origem);
}
