#include <stdio.h>

int main(void) {
    int T, C;
    scanf("%d %d", &T, &C);

    int matriz[200][200]; // tamanho fixo no maximo permitido pelo enunciado
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            matriz[i][j] = C;
        }
    }

    int x, y, c, r, estilo;
    scanf("%d %d", &x, &y);

    while (!(x == -1 && y == -1)) {
        scanf("%d %d %d", &c, &r, &estilo);

        int x1 = x - r, x2 = x + r;
        int y1 = y - r, y2 = y + r;

        if (x1 >= 0 && x2 < T && y1 >= 0 && y2 < T) {
            for (int i = y1; i <= y2; i++) {
                for (int j = x1; j <= x2; j++) {
                    if (estilo == 2) {
                        matriz[i][j] = c;
                    } else if (estilo == 1) {
                        if (i == y1 || i == y2 || j == x1 || j == x2) {
                            matriz[i][j] = c;
                        }
                    }
                }
            }
        }

        scanf("%d %d", &x, &y); // le o proximo comando (ou o -1 -1 de parada)
    }

    printf("P2\n");
    printf("%d %d\n", T, T);
    printf("255\n");
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}