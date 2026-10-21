/*
O programa identifica o maior somatória dentro da matriz em formato de ampulheta:

a b c
  d
e f g

*/

#include <stdio.h>

int main(){
    int matriz[6][6];

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    /* Lógica da ampulheta*/
    int maiorSoma = -10000;
    int soma = 0;

    for (int  i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            soma = matriz[i][j] + matriz[i][j+1] + matriz[i][j+2];
            soma += matriz[i+1][j+1];
            soma += matriz[i+2][j] + matriz[i+2][j+1] + matriz[i+2][j+2];

            if(soma > maiorSoma)
            {
                maiorSoma = soma;
            }
        }
    }
    printf("%d", maiorSoma);
    
    return 0;
}