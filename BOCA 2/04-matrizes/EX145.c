/*
Programa imprime os elementos da diagonal secundária de uma matriz quadrada
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int matriz[n][n];

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    register int k, l;
    
    for (k = 0, l = n - 1; k < n; k++, l--){
        printf("%d\n", matriz[k][l]);
    }

    return 0;
}

/*

incrementar linha
decrementar coluna

mas eu não quero printar todos os elementos...
ata não faz sentido usar loops aninhados aq
um único loop com duas cargas iniciais e duas pós instruções 

*/