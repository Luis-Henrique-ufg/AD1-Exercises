/* 
N =  quantidade de rótulos de balas
K = número de tipos diferentes de bala
*/

#include <stdio.h> 

int main(void){
    int N, K;

    register int i, j;

    scanf("%d%d", &N, &K);
    
    int contagem[K + 1]; 


    for (i = 0; i <= K; i++){
        contagem[i] = 0;
    }
    
    for (i = 0; i < N; i++){
        int rotulo;
        scanf("%d", &rotulo);

        contagem[rotulo]++;
    }

    int minimo = contagem[1];

    for (j = 2; j <= K; j++){
        if (contagem[j] < minimo){
            minimo = contagem[j];
        }
    }
    printf("%d\n", minimo);

return 0;
}




