#include <stdio.h>
#define M 61
#define MAX 5000

int main(){
    int jogos[MAX][6], n, vetorcount[M], i, j, maior, ind;
    scanf("%d", &n);
    while(n!=0){
        for (i = 1; i<M;i++){
            vetorcount[i]=0;
        }
        for (i = 0; i < n; i++){
            for (j = 0; j < 6; j++){
                scanf("%d", jogos[i][j]);
            }
        }
        for (i = 0; i < n; i++){
            for (j = 0; j < 6; j++){
                vetorcount[jogos[i][j]]++;
        }
    }
    for (i = 0; i < 10; i++){
        maior = -1;
        for(j = 1; j < M; j++){
            if(maior < vetorcount[j]){
                maior = vetorcount[j];
                ind = j;
            }
        }
        printf("%d - %d\n", ind, maior);
        vetorcount[ind] = 0;
    }
    scanf("%d", &n);
}
return 0;
}