/*
Dado o mapa das câmeras em funcionamento nas esquinas, indicar o status de todas
as quadras da cidade. S para câmeras funcionais U para não funcionais.
*/
#include <stdio.h>

int main(){
    int n, soma = 0;
    scanf("%d", &n);

    int matriz[n+1][n+1];

    for (int i = 0; i < n + 1 ; i++){
        for (int j = 0; j < n +1; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            soma = matriz[i][j] + matriz[i][j+1] + matriz[i+1][j] + matriz[i+1][j+1];
            if (soma >= 2){
                putchar('S');
            } else {
                putchar('U');
            }
        } 
        putchar('\n');
    }
}