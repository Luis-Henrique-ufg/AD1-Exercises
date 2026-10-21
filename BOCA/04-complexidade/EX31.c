#include <stdio.h>
#include <stdbool.h>

#define MAXN 1005

int main() {
    int n = 0; // numero de lanchonetes
    int m = 0; // numero de dias de compra

    scanf("%d", &n);
    int x[MAXN]; // preço em moedas do café em cada lanchonete

    // c -> lanchonetes
    // d -> dias

    for (int c = 0; c < n; c++) {
        scanf("%d", &x[c]);
    }

    scanf("%d", &m);
    int q[MAXN]; // banca de moedas por dia

    for (int d = 0; d < m; d++) {
        scanf("%d", &q[d]);
    }

    for (int d = 0; d < m; d++) {
        int n_lanchonete_cafe = 0;
        for (int c = 0; c < n; c++) {
            if (x[c] <= q[d]) {
                n_lanchonete_cafe++;
            }
        }

        printf("%d ", n_lanchonete_cafe);

        // x[c] -> preço do cafe indexado a lanchonetes
        // q[d] -> orçamento indexado ao dia

        bool primeiro = true;

        for (int c = 0; c < n; c++) {
            if (x[c] <= q[d]) {
                if (!primeiro) {
                    printf(" ");
                }
                printf("%d", c + 1);
                primeiro = false;
            }
        }
        putchar('\n');
    }

    return 0;
}
