/* Esse programa recebe N números na base 10 e os converte para a base 4*/

#include <stdio.h>

void conversao(int numero);

int main(void){
    int N;
    
    scanf("%d", &N);

    int numeros[N];

    for (int i = 0; i < N; i++){
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < N; i++){
        conversao(numeros[i]);
    }

    printf("\n");
    return 0;
}

void conversao(int numero){

    if (numero == 0){
        printf("0 ");
        return;
    }

    int restos[32];
    int i = 0;

    while (numero > 0){
        restos[i] = numero % 4;
        numero /= 4;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--){
        int digito = restos[j];

        switch (digito){
            case 0: putchar('A'); break;
            case 1: putchar('C'); break;
            case 2: putchar('G'); break;
            case 3: putchar('T'); break;
        }
    }

    printf("\n");
}