#include <stdio.h>

int main() {
    int carbono, dureza, resistencia;
    if (scanf("%d %d %d", &carbono, &dureza, &resistencia)!=3) {
        return 1;
    }

    if (carbono < 7 && dureza > 50 && resistencia > 80000) {
        printf("ACO DE GRAU = 10\n");
    } else if (carbono < 7 && dureza > 50) {
        printf("ACO DE GRAU = 9\n");
    } else if (carbono < 7) {
        printf("ACO DE GRAU = 8\n");
    } else {
        printf("ACO DE GRAU = 7\n");
    }

    return 0;
}