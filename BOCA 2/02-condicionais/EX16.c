#include <stdio.h>

void b(unsigned char n);

int main(){
    int num;
    scanf("%d", &num);
    
    if (num > 255 || num < 0)
    {
        printf("Numero invalido!");
        return 1;
    }
    
    if(num == 0)
    {
        printf("00000000");
    }

    unsigned char n = (unsigned char) num;

    b(n);

    return 0;
}

void b(unsigned char n)
{
    if (n == 0){}
    else
    {
        b(n / 2);
        printf("%hhu", n % 2);
    }
}