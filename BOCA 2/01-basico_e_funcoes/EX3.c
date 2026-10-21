#include <stdio.h>

double convercaoCelsius(double temp);
double conversaoPolegadas(int pol);

int main(){
    double fah;
    int    pol;
    
    scanf("%lf%d", &fah, &pol);

    printf("O VALOR EM CELSIUS = %.2f\n", convercaoCelsius(fah));
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", conversaoPolegadas(pol));

    return 0;
}

double convercaoCelsius(double temp)
{
    return (5 * (temp - 32)) / 9;
}

double conversaoPolegadas(int pol)
{
    return pol * 25.4;
}