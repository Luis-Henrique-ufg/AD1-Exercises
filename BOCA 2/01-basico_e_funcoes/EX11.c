#include <stdio.h>
#include <math.h>

float areaTriangulo(float l1, float l2, float l3, float t);

float T(float l1, float l2, float l3);

int main(){
    float L1, L2, L3;
    scanf("%f%f%f", &L1, &L2, &L3); 


    float t = T(L1, L2, L3);
    printf("A AREA DO TRIANGULO E = %.2f", areaTriangulo(L1, L2, L3, t));
}

float areaTriangulo(float l1, float l2, float l3, float t)
{
    return sqrt(t * (t - l1) * (t - l2) * (t - l3));
}

float T(float l1, float l2, float l3)
{
    return (l1 + l2 + l3) / 2;
}