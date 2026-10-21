#include <stdio.h>

float precoFinal(float x, float y, float z);

int main(){
    float deFabrica, distribuidor, impostos;
    scanf("%f%f%f", &deFabrica, &distribuidor, &impostos);

    printf("O VALOR DO CARRO E = %.2f", precoFinal(deFabrica, distribuidor, impostos));

    return 0;
}

float precoFinal(float x, float y, float z)
{
    return x + (y / 100 * x) + (z / 100 * x);
}