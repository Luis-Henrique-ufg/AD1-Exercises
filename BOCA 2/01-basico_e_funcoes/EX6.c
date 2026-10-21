#include <stdio.h>

int main(){
    float a, b, c, d;
    scanf("%f%f%f%f", &a, &b, &c, &d);

    printf("O VALOR DO DETERMINANTE E = %.2f\n", a * d - b * c);
    
    return 0;
}