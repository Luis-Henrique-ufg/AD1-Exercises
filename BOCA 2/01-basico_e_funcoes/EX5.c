#include <stdio.h>

float calculaDelta(float a, float b, float c);

int main(){
    float A, B, C;

    scanf("%f%f%f", &A, &B, &C);

    printf("O VALOR DE DELTA E = %.2f\n", calculaDelta(A, B, C));

    return 0;
}

float calculaDelta(float a, float b, float c)
{
    return b * b - 4 * a * c;
}