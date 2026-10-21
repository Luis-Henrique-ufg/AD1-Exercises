#include <stdio.h>
#include <stdlib.h>

#define N 5

// A função recebe o array normal. Em C, int arr[] como parâmetro é a mesma coisa que int *arr.
void descripty(int arr[]);

int main(void){
    int msg[N]; // Resolvido: apenas um array normal de inteiros!

    printf("Digite %d valores em hexadecimal (ex: A0 73 25):\n", N);
    
    for (int f = 0; f < N; f++){
        // %x avisa o scanf que a entrada será em formato hexadecimal
        scanf("%x", &msg[f]);
    }

    // Passamos o array. Ele já vai como referência por baixo dos panos.
    descripty(msg); 
    
    printf("\nValores convertidos:\n");
    for (int j = 0; j < N; j++){ 
        // O 0x é só texto. %02X garante que o número terá pelo menos 2 casas e letras maiúsculas.
        printf("index[%d] = 0x%02X\n", j, msg[j]);
    }

    return 0;
}

void descripty(int arr[]){
    for (int i = 0; i < N; i++){
        // Como é um array normal, acessamos o valor direto com arr[i]
        if (arr[i] % 2 == 0){ 
            arr[i] += 5;
        } else { // Se não é par, obrigatoriamente é ímpar, não precisa do "else if"
            arr[i] -= 3;
        }
    }
}