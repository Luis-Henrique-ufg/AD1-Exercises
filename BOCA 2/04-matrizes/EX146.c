#include <stdio.h>

int main(){
    int m = 0, n = 0;
    
    while (m > 10 || m <= 0){
        scanf("%d", &m);
    }
    
    while(n > 10 || n <= 0){
        scanf("%d", &n);
    }

    int matriz[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < m; i++){
        printf("linha %d: ", i + 1);
        for (int j = 0; j < n; j++){
            if (j == 0){
                printf("%d", matriz[i][j]);
            } 
            else 
            {
                printf(",%d", matriz[i][j]);
            }
        }
        putchar('\n');
    }
    return 0;
}