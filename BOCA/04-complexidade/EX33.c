#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_N 1005
#define MAX_K 1000005

int main() {
    // n = numero de linhas e colunas da matriz
    // k = distancia entre celulas que uma prisão pode acontecer
    int n, k;
    int ct = 0; // número de testes.

    if (scanf("%d", &ct) != 1) {
        return 1;
    }

    for (int t = 0; t < ct; t++) {
        scanf("%d %d", &n, &k);

        int total = 0;
        char matriz[n][n];

        bool preso[n][n];
        memset(preso, 0, sizeof(preso));

        // preenchimento do vetor bidimensional com os caracteres 'P' ou 'L'
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf(" %c", &matriz[i][j]);
            }
        }

        // verificar horizontal: mesma linha, colunas diferentes
        for (int l = 0; l < n; l++) {
            for (int c = 0; c < n; c++) {
                for (int d = 1; d <= k && c + d < n; d++) {
                    char A = matriz[l][c];
                    char B = matriz[l][c + d];
                    if (A == 'P' && B == 'L' || A == 'L' && B == 'P') {
                        if (!preso[l][c] && !preso[l][c + d]) {
                            preso[l][c]     = true;
                            preso[l][c + d] = true;
                            total++;
                        }
                    }
                }
            }
        }

        printf("%d", total);
        printf("\n");
    }
    return 0;
}

/*
comparar indice a indice seguindo as regras:
1. Prisão são acontece se 'P' e 'L' estiverem na mesma linhas
2. Distancia k entre as células para contecer a prisão
3. Um policial so pode preder um ladrão
*/