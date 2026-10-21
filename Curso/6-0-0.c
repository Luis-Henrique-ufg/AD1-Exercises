#include <stdio.h>

int main(){
    int num;

    for(;;){
        printf("Digite um numero: ");
        scanf(" %d", &num);

        
        if(num == 3){
            printf("+++++++++++++++++\n|               |\n| N U M E R O 3 |\n|               |\n|               |\n+++++++++++++++++");
        }
        putchar('\n');
    }
    return 0;
}