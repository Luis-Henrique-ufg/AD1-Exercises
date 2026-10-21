/* Esse programa permite o usuário definir os valores para linhas (m) e colunas (n) para duas matrizes. Preeche a primeira, escolhe entre soma ('+') ou multiplicação ('x') e o programa faz a operação.*/

#include <stdio.h>

int main(void){
    int m, n;

    scanf("%d%d", &m, &n);

    int matriz1[m][n];
    int matriz2[m][n];

    /* Leitura */
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    /* Ler a operação*/
    char op;
    scanf(" %c", &op);

    /* Ler matriz B*/
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }

    if (op == '+'){
        /* Adição */
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                printf("%d ", matriz1[i][j] + matriz2[i][j]);
            }
            printf("\n");
        }
    } else if (op == 'x') {
        /* multiplicação*/
        if (n != m){
            printf("ERROR\n");
        } else {
            for (int i = 0; i < m; i++){
                for (int j = 0; j < n; j++){
                    int sum = 0;
                    for (int k = 0; k < n; k++){
                        sum += matriz1[i][k] * matriz2[k][j];
                    }
                    printf("%d ", sum);
                }
                printf("\n");
            }
        }
    }
    return 0;
}