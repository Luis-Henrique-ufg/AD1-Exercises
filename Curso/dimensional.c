#include <stdio.h>

#define L 4
#define C 6

void leitura(int matriz[L][C]);

int main(void){
    int matriz[L][C] = {0};
        
    int x = 0; 
    int y = 0; 
    int z = 0;
    
    while (1){
    leitura(matriz);

    printf("Linha: ");
    scanf("%d", &x);

    printf("Coluna: ");
    scanf("%d", &y);
    
    printf("Valor: ");
    scanf("%d", &z);

    if (z > 999){
        break;
    }
    matriz[x - 1][y - 1] = z;
    }
    
    return 0;
}

void leitura(int matriz[L][C]){
    
    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            printf("%3d", matriz[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
}