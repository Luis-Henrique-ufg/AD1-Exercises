#include <stdio.h>

int main(){
    int m, n;
    scanf("%d%d", &m, &n);

    int matriz[m][n];

    int count = 1;

    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 != 0){
                matriz[i][j] = count;
                count++;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        putchar('\n');
    }
    return 0;
}


/*
[0][0] ok
[0][1]
[0][2] ok 


[2][3]

*/