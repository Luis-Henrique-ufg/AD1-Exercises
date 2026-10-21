#include <stdio.h>

int main(void){
    int val;

    printf("Insira um valor: ");
    scanf("%d", &val);

    if (val == 1)
        printf("valor igual a 1\n");
    else if (val == 2)
        printf("valor igual a 2\n");
    else if (val == 3)
        printf("valor igual a 3\n");
    else
        printf("Valor nao encontrado\n");
    
    return 0;
}