/*
O programa imprime uma matriz de zeros com uma borda de números específicos.
*/

#include <stdio.h>

int main(){
    int altura, largura, larguraBorda, valorBorda;
    scanf("%d%d%d%d", &largura, &altura, &larguraBorda, &valorBorda);

    int matriz[altura][largura];

    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < largura; j++)
        {
            if (i < larguraBorda || i >= altura - larguraBorda || j < larguraBorda || j >= largura - larguraBorda)
            {
                matriz[i][j] = valorBorda;
            }
            else 
            {
                matriz[i][j] = 0;
            }
        }
    }
    printf("P2\n");
    printf("%d %d\n", largura, altura);
    printf("255\n");
    
    for (int i = 0; i < altura; i++){
        for(int j = 0; j < largura; j++){
            printf("%d ", matriz[i][j]);
        }
        putchar('\n');
    }
    return 0;
}