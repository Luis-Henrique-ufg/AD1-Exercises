#include <stdio.h>

double fator(int n);

int main(){
    int n;
    scanf("%d", &n);

    printf("%.0f\n", fator(n));
    
    return 0;
}

double fator(int n)
{
    if (n <= 1)
        return 1.0;
    
    if (n == 2)
        return 1.0;
    
    if (n % 2 == 0)
        return fator(n - 1);
    
    return n * fator(n - 2);
}