/* Program lê 2 números inteiros e apresenta-os em ordem decrescente.*/
#include <stdio.h>
#include <stdbool.h>

int main(void){
    int x, y;

    scanf("%d%d", &x, &y);

    bool result = y > x ? printf("%d %d", y, x) : printf("%d %d", x, y);

    return 0;
}