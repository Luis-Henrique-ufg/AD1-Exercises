#include <stdio.h>

float poten(float val, int n);

int main(){
    
    printf("%f", poten(2.0, 2));

    return 0;
}

float poten(float val, int n)
{
    float pot;
    int   i;

    for (i = 1, pot = 1.0; i <=n; i++)
    {
        pot *= val;
        printf("%.2f\n", pot);
    }
}