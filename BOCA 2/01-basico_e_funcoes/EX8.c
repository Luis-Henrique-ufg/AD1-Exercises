#include <stdio.h>
#include <math.h>

float areaHexagono(float aresta);

int main(){
    float h, a;
    scanf("%f%f", &h, &a);

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", 1.0 / 3.0 * areaHexagono(a) * h);
}

float areaHexagono(float aresta)
{
    return (3 * aresta * aresta * sqrt(3)) / 2; 
}