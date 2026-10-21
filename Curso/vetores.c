#include <stdio.h> 
#include <stdlib.h>

#define N 5

int main(void){

    float aporte;
    float valor_final = 0;
    float acoes[N];
    float qtd[N];

    printf("Digite o aporte maximo: ");
    scanf("%f", &aporte);

    for (int i = 0; i < N; i++){
        printf("acao [%d] = ", i);
        scanf("%f", &acoes[i]);
        printf("quantidade [%d] = ", i);
        scanf("%f", &qtd[i]);
    }

    printf("\n");
    
    for (int j = 0; j < N; j++){
        valor_final += (acoes[j] * qtd[j]);
    }
    
    if (valor_final > aporte){
        printf("Aporte insuficiete!\a\n");
        printf("Aporte = %.2f\n", aporte); 
        printf("Valor final = %.2f\n", valor_final);
    } else {
        printf("Valor final = %.2f", valor_final);
    }
    
    printf("\n");

    char loop;
    printf("Deseja calcular novamente? <s> SIM | <n> NAO\n");
    scanf("%s", &loop);

    if (loop == 's' || loop == 'S'){
        main();
    } else if (loop == 'n' || loop == 'N'){
        system("PAUSE");
    }

    return 0;
}