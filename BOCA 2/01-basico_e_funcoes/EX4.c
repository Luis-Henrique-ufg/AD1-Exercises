#include <stdio.h>

#define PI 3.14159

float areaCilindro(float raio);
float areaLateral(float raio, float altura);
float areaTotal(float AC, float AL);

int main(){
    float raioLata, alturaLata;
    
    scanf("%f%f", &raioLata, &alturaLata);

    double Ac = areaCilindro(raioLata);
    double Al = areaLateral(raioLata, alturaLata);
    double AT = areaTotal(Ac, Al);

    printf("O VALOR DO CUSTO E = %.2f", AT * 100);
}

float areaCilindro(float raio)
{
    return PI * raio * raio;
}

float areaLateral(float raio, float altura)
{
    return 2 * PI * raio * altura;
}

float areaTotal(float AC, float AL)
{
    return 2 * AC + AL;
}
