#include <stdio.h>

/* ================== */
/* Função Principal*/
int main(void){
    
    int temp = 0, energy = 0;
    
    scanf("%d%d", &temp, &energy);
    
    if (temp < 30)
        if (energy > 80)
            printf("Aciona o aquecedor\n");
        else
        printf("Alerta: Energia insuficiente\n");
    
    else
    printf("Temperatura ok.\n"); 
}

int ident(void){
    int temp = 0, energy = 0;
    
    scanf("%d%d", &temp, &energy);
    
    if (temp < 30)
    {
        if (energy > 80)
        printf("Aciona o aquecedor\n");
    }
    else
    {
        printf("Alerta: Energia insuficiente\n");
    }
else
    {
        printf("Temperatura ok.\n"); 
    }
    
}