#include <stdio.h>

int determinante(int ordem, int mat[ordem][ordem]) {
    if (ordem == 1) return mat[0][0];
    if (ordem == 2) return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];

    int det = 0;
    int sub[ordem - 1][ordem - 1];
    int sinal = 1;
    for (int col = 0; col < ordem; col++) {
        for (int i = 1; i < ordem; i++) {
            int sub_j = 0;
            for (int j = 0; j < ordem; j++) {
                if (j == col) continue;
                sub[i - 1][sub_j] = mat[i][j];
                sub_j++;
            }
        }
        det += sinal * mat[0][col] * determinante(ordem - 1, sub);
        sinal = -sinal;
    }
    return det;
}

int main(){
    int m, n;
    if (scanf("%d%d", &m, &n) != 2) return 0;

    int matriz1[m][n];
    int transposta[n][m];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matriz1[i][j]);
        }
    } /* end leitura*/
    
    char opt;
    scanf(" %c", &opt);

    if (opt == 'T' || opt == 't')
    {
        register int i, j, k, l;
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                transposta[j][i] = matriz1[i][j];
            }
        } /* end transposição*/

        for(k = 0; k < n; k++){
            for(l = 0; l < m; l++){
                printf("%d", transposta[k][l]);
                if (l < m - 1) printf(" ");
            }
            putchar('\n');
        } /*end impressão*/

    } /*end if*/
    else if (opt == 'D' || opt == 'd')
    {
        if (m != n){
            puts("ERROR");
        }
        else {
            int det = determinante(m, matriz1);
            printf("%d\n", det);
        }
    }
    return 0;
}