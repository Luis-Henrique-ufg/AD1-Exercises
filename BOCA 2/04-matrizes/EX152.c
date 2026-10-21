#include <stdio.h> 

void transposta(int n, int A[n][n]);

int main(){
    int n, traco = 0;
    scanf("%d", &n);

    int A[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
 
    for (int i = 0; i < n; i++){
        traco += A[i][i];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", traco * A[i][j] + A[j][i]);
        }
        putchar('\n');
    }

    return 0;
}