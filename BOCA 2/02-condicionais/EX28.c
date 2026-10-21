#include <stdio.h>

int main() {
    int ano;
    if (scanf("%d", &ano) != 1) {
        return 1;
    }

    if (ano <= 1582) {
        printf("ANO NAO BISSEXTO\n");
        return 0;
    }

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
        printf("ANO BISSEXTO\n");
    } else {
        printf("ANO NAO BISSEXTO\n");
    }
    return 0;
}