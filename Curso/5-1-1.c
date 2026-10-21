/* Program imprimi a tabuada de 1 até 9*/

#include <stdio.h>

int main(void){
    int tab, n;

    tab = 1;
    while (tab <= 10){
        n = 1;
        while (n <= 10){
            printf("%3d x %3d = %3d\n", tab, n, tab*n);
            n++;
        }
        tab++;
        putchar('\n');
    }
    return 0;
}