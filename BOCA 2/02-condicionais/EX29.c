#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int milhar   = n / 1000;
    int centenas = (n % 1000) / 100;
    int dezenas  = (n % 100) / 10;
    int unidades = n % 10;

    if (n > 9999 || n <= 0) {
        printf("Numero invalido!");
        return 0;
    }

    if (n <= 9) {
        printf("(primeira ordem) ");
    } else if (n <= 99) {
        printf("(segunda ordem) ");
    } else if (n <= 999) {
        printf("(terceira ordem) ");
    } else {
        printf("(quarta ordem) ");
    }

    printf("%d = ", n);

    int primeiro = 1;

    if (milhar != 0) {
        if (!primeiro) {
            printf(" + ");
        }
        printf("%d %s",
               milhar,
               milhar == 1 ? "unidade de milhar" : "unidades de milhar");
        primeiro = 0;
    }

    if (centenas != 0) {
        if (!primeiro) {
            printf(" + ");
        }
        printf("%d %s", centenas, centenas == 1 ? "centena" : "centenas");
        primeiro = 0;
    }

    if (dezenas != 0) {
        if (!primeiro) {
            printf(" + ");
        }
        printf("%d %s", dezenas, dezenas == 1 ? "dezena" : "dezenas");
        primeiro = 0;
    }

    if (unidades != 0) {
        if (!primeiro) {
            printf(" + ");
        }
        printf(
            "%d %s", unidades, unidades == 1 ? "unidade = " : "unidades = ");
        primeiro = 0;
    }

    int igual = 1;

    if (milhar != 0) {
        if (!igual) {
            printf(" + ");
        }
        printf("%d", milhar * 1000);
        igual = 0;
    }

    if (centenas != 0) {
        if (!igual) {
            printf(" + ");
        }
        printf("%d", centenas * 100);
        igual = 0;
    }

    if (dezenas != 0) {
        if (!igual) {
            printf(" + ");
        }
        printf("%d", dezenas * 10);
        igual = 0;
    }

    if (unidades != 0) {
        if (!igual) {
            printf(" + ");
        }
        printf("%d", unidades);
    }

    return 0;
}
