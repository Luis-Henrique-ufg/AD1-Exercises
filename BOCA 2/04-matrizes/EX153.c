#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int matriz[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] == 1111 && matriz[i - 1][j] == 4) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }
    printf("WALLY NAO ESTA NA MATRIZ");
    return 0;
}