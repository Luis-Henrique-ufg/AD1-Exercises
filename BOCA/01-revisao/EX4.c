/* Programa recebe a quantidade de números N e o respectivos números. Em seguida, avalaia se tais números, quando escritos de trás para frente, são iguais (políndromos).*/
#include <stdio.h>

int main(void){
    int N;

    scanf("%d", &N);

    int numeros[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &numeros[i]);
    }


    for (int i = 0; i < N; i++)
    {
        int original = numeros[i];
        int reverso = 0;
        int temp = original; 

        while (temp > 0)
        {
            int digito = temp % 10;
            reverso = reverso * 10 + digito;
            temp /= 10;
        }

        if (original == reverso)
        {
            printf("yes ");
        } else {
            printf("no ");
        }
    }
    printf("\n");
    return 0;
}