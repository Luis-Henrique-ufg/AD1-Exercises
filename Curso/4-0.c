#include <stdio.h>
#include <stdbool.h>

int main(void){
    int a, b;
    bool result = 0;

    scanf("%d%d", &a, &b);
    result = (a == b) ? printf("TRUE\n") : printf("FALSE\n");
    result = (a > b) ? printf("TRUE\n") : printf("FALSE\n");
    result = (a < b) ? printf("TRUE\n") : printf("FALSE\n");
    
    return 0;
}