#include <stdio.h>

double calculoVelocidade(double a, double t);
double calculoEspaco(double a, double t);
double calculoTrabalho(double m, double v);

int main(){
    double massa, aceleracao, tempo;
    scanf("%lf%lf%lf", &massa, &aceleracao, &tempo);

    printf("VELOCIDADE = %.2f\n", calculoVelocidade(aceleracao, tempo));
    printf("ESPACO PERCORRIDO = %.2f\n", calculoEspaco(aceleracao, tempo));

    printf("TRABALHO REALIZADO = %.2f\n", calculoTrabalho(massa, aceleracao * tempo));

}

double calculoVelocidade(double a, double t)
{
    return (a * t) * 3.6;
}

double calculoEspaco(double a, double t)
{
    return (a * (t * t)) / 2;
}

double calculoTrabalho(double m, double v)
{   
    m *= 1000;
    return m * v * v / 2;
}

/* 

massa lida em toneladas, mas o trabalho a usa em kilogramas --> conversão.

W = m * v * v / 2
5 * 90 = 450 ms

    
*/