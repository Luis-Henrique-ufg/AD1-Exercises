/* Program imprimi a tabuada do 9 de trás pra frente*/
#include <stdio.h>

int main(void){
    int i = 10;

    while (i){
        printf("9 x %2d = %2d\n", i, 9*i);
        i--;
    }
}