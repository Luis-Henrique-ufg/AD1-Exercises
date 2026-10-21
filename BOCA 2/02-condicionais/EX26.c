#include <stdio.h>

int main() {
    double salario;
    scanf("%lf", &salario);

    salario > 300 ? printf("SALARIO COM REAJUSTE = %.2f", salario * 1.3)
                   : printf("SALARIO COM REAJUSTE = %.2f", salario * 1.5);

    return 0;
}