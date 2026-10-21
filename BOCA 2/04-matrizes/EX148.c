/*
programa lê uma matriz 2x2 e imprime o seu quadrado;
*/

#include <stdio.h>

int main(){
    /*Leitura da matriz*/
    float matriz[2][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    /*fim da leitura*/

    /*criação da matriz resultado zerada*/
    float matrizResultado[2][2] = {0};

    /*
    percorre linha
    percorre coluna
    multiplica linha x coluna
    */
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++){
            matrizResultado[i][j] += matriz[i][k] * matriz[k][j];
        }
    }
}
    for (int i = 0, j = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%.3f ", matrizResultado[i][j]);
        }
        putchar('\n');
    }
    return 0;
}


/*
5 8    5 8 
7 1    7 1

5 * 5 + 8 * 7 = 25 + 56 = 81 ---> matriz[0][0] * matriz[0][0] + matriz[0][1] * matriz[1][0]

j++

5 * 8 + 8 * 1 = 40 + 8 = 48 ---> matri[0][0] * matriz[0][1] + matriz[0][1] * matriz[1][1]

i++

7 * 5 + 1 * 8 = 35 + 8 = 42 ---> matriz[1][0] * matriz[0][0] + matriz[1][1] * matriz[1][0]

j++

7 * 8 + 1 * 1 = 56 + 1 = 57 ---> matriz[1][0] * matriz[0][1] + matriz[1][2] * matriz[1][2]

[0][0] * [0][0] + [0][1] * [1][0]


*/