#include <stdio.h>
#include <stdlib.h>

int main(void){
    float n1, n2;
    int opt;

    scanf("%f%f", &n1, &n2);

    system("CLS");
    
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    
    system("CLS");
    
    scanf("%d",&opt);
    
    if (opt == 1)
        printf("%.2f", n1 + n2);
    else if (opt == 2)
        printf("%.2f", n1 - n2);
    else if (opt == 3)
        printf("%.2f", n1 * n2);
    else if (opt == 4)
        printf("%.2f", n1 / n2);
    
    return 0;

}