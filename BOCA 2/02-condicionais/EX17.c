#include <stdio.h>

int inverter(int n, int acum);

int main(){
    int n, i = 0;
    scanf("%d", &n);

    printf("%d", inverter(n, i));
    // printf("%d", inverter(n));
}

int inverter(int n, int acum)
{
    if (n == 0)
    {
        return acum;
    } 
    else 
    {
        return inverter(n / 10, acum * 10 + (n % 10));
    }
}