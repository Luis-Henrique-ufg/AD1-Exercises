#include <stdio.h>
#include <math.h>

float distanciaPontos(float X1, float Y1, float X2, float Y2);

int main(){
    float x1, x2, y1, y2;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    printf("A DISTANCIA ENTRE A E B = %.2f\n", distanciaPontos(x1, y1, x2, y2));

    return 0;
}

float distanciaPontos(float X1, float Y1, float X2, float Y2)
{
    return sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));
}