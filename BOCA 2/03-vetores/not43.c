#include <stdio.h>

int main() {
    double valorIngresso, valorInicial, valorFinal;

    if (scanf("%lf %lf %lf", &valorIngresso, &valorInicial, &valorFinal)
        != 3) {
        return -1;
    }

    if (valorInicial >= valorFinal) {
        printf("INTERVALO INVALIDO.\n");
        return 0;
    }

    double melhorValor = 0.0;
    double melhorLucro = 0.0;
    int melhorN        = 0;

    for (double v = valorInicial; v <= valorFinal; v += 1.0) {
        double passos = (v - valorIngresso) / 0.50;
        int n;

        if (v < valorIngresso) {
            n = 120 + (int)((valorIngresso - v) * 50);
        } else {
            n = 120 - (int)((v - valorIngresso) * 60);
        }

        double receita  = v * n;
        double despesas = 200.0 + 0.05 * n;
        double lucro    = receita - despesas;

        printf("V: %.2f, N: %d, L: %.2f\n", v, n, lucro);

        if (lucro > melhorLucro) {
            melhorLucro = lucro;
            melhorValor = v;
            melhorN     = n;
        }
    }
    printf("Melhor valor final: %.2f\n", melhorValor);
    printf("Lucro: %.2f\n", melhorLucro);
    printf("Numero de ingressos: %d\n", melhorN);

    return 0;
}