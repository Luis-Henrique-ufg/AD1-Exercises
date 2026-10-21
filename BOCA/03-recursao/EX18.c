#include <stdio.h>

int reverso(int n, int acum);

int main(){
    int n;
    int i = 0;
    scanf("%d", &n);

    printf("%d", reverso(n, i));

    return 0;
}

int reverso(int n, int acum)
{
    if (n == 0){
        return acum;
    }

    return reverso(n / 10, acum * 10 + (n % 10));
}
