#include <stdio.h>

int main(){
    int reais;
    int resto;
    scanf("%d", &reais);

    int X = reais / 100;
    resto = reais % 100;
    
    int Y = resto / 50;
    resto = reais % 50;
    
    int Z = resto / 10;
    resto = reais % 10;

    int W = resto / 1;

    printf("NOTAS DE 100 = %d\n", X);
    printf("NOTAS DE 50 = %d\n", Y);
    printf("NOTAS DE 10 = %d\n", Z);
    printf("MOEDAS DE 1 = %d\n", W);

    return 0;
}

/*
Qualquer valor pode ser decomposto usando apenas notas pequenas. Logo eu preciso começar pela maior nota para garantir seus usos.

-----------------------

232 / 100

2.32 --- > 2 notas de 100

0.32 / 50 --> 0 notas de 50

0.32 / 10 --> 3 notas de 10

2 / 1 ---> 2 moedas de 1

-----------------------------

O problema é após a divisão pode 100. O número que resulta não é 32, mas 0.32. As divisões subsequentes resultaram em erros? 
*/