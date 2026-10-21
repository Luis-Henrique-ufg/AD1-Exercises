#include <stdio.h> 

int main(void){
    printf("%d\n", 15>11 && 8<4 || 7>=2);
    return 0;
}

/* 
Por que é verdadeiro?
R -> Procedência de operadores lógicos: !   > >= < <=   ==  !=    &&   ||
Então, resolvendo, teremos: 

1 && 0 || 1

1 && 0 -> Para a operação && ser verdadeira, ambos devem ser verdadeiros. Então, nesse caso, 0, falso.

0 || 1 -> Falso ou verdadeiro || para ser verdadeiro, basta 1 dos lados ser verdadeiro, logo resultado da expressão inteira é VERDADEIRO.

*/