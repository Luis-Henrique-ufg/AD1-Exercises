/*
Programa imprime os elementos da diagonal principal de uma matriz quadrada
*/

#include<stdio.h>
int main(void){
    int n;
    scanf("%d", &n);

    int matriz[n][n];

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d\n", matriz[k][k]);
    }

    return 0;
}

/*

0 1 2 --> 3 iterações

[0] [0]
[1] [1]
[2] [2]


[1]    2    3 
 4     5    6
 7     8    9

incremente linha e coluna
 
 1     2     3 
 4    [5]    6
 7     8     9

 incremente linha e coluna

1      2       3 
4      5       6
7      8      [9]


*/