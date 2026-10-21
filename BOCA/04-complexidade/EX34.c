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

        // preenchimento do vetor bidimensional com os caracteres 'D' ou 'L'
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
                    if ((A == 'D' && B == 'L') || (A == 'L' && B == 'D')) {
                        if (!preso[l][c] && !preso[l][c + d]) {
                            preso[l][c]     = true;
                            preso[l][c + d] = true;
                            total++;
                        }
                    }
                }
            }
        }
        //verificar horizontal
        for (int l = 0; l < n; l++) {
            for (int c = 0; c < n; c++) {
                for (int d = 1; d <= k && l + d < n; d++) {
                    char A = matriz[l][c];
                    char B = matriz[l + d][c];
                    if ((A == 'D' && B == 'L') || (A == 'L' && B == 'D')) {
                        if (!preso[l][c] && !preso[l + d][c]) {
                            preso[l][c]     = true;
                            preso[l + d][c] = true;
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
Exemplos:


3 1
D L D
L D L
L L D

4
---

1
5 1
L D L L D
L D L L L
L L L D L
L D L L L
D L L L D

7
---

1
7 2
L L L L L L D
L L L L L L L
L D L L L D L
L L L L L L L
L L L D L L L
L L L L L D L
D D D L L L L

8
*/