#include <stdio.h>

int main(){
    float a, b, c, d, e, f;
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

    float determinante = a * e - b * d;

    float Dx = (c * e - b * f) / determinante;
    float Dy = (a * f - c * d) / determinante;

    printf("O VALOR DE X E = %.2f\n", Dx);
    printf("O VALOR DE Y E = %.2f\n", Dy);

    return 0;
}

/*

a b
d e

c b
f e

a c
d f

*/