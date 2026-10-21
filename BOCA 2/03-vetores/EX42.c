#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        int publico;
        double pp, pg, pa, pc;

        if (scanf("%d %lf %lf %lf %lf", &publico, &pp, &pg, &pa, &pc) != 5) {
            return 1;
        }

        double renda
            = publico * (pp / 100.0) * 1.0 + publico * (pg / 100.0) * 5.0
              + publico * (pa / 100.0) * 10.0 + publico * (pc / 100.0) * 20.0;

        printf("A RENDA DO JOGO N. %d E = %.2f\n", i, renda);
    }

    return 0;
}