/*
Programa calcula o determinante de uma matriz 2x2
*/

#include <stdio.h>

int main(){
    float matriz[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

     float A = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
 
    printf("%.2f\n", A);

    return 0;

}

/*
Definir equipe e escolher o que fazer: pilha, 

6-9 funcionalidades

exemplo: um projeto que controla o teatro

*/