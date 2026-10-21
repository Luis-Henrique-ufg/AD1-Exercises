#include <stdio.h> 

int quatroAlgarismos(int n, int peso);

int main(){
    int n, soma, verificador;
    scanf("%d",  &n);

    soma = quatroAlgarismos(n, 5);
    verificador = soma % 7;

    printf("O NOVO NUMERO E = %d\n", n * 10 + verificador);

    return 0;
}

int quatroAlgarismos(int n, int peso)
{
    if (n == 0){
        return 0;
    } 

    int digito = n % 10;

    return digito * peso + quatroAlgarismos(n / 10, peso - 2);
}