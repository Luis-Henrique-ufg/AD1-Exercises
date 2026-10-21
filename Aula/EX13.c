/* algoritmo verifica se um ano é bissexto*/
#include <stdio.h>

int main() {
    int ano;
    if (scanf("%d", &ano) != 1) {
        return 1;
    }

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
        printf("ANO BISSEXTO");
    } else {
        printf("ANO NAO BISSEXTO");
    }
}

/*


*/