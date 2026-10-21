#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
    char idade, carro;

    scanf("%c%c", &idade, &carro);
    tolower(carro);

    system("cls");
    
    if (carro == 's' && idade > 18 || idade < 50){
        printf("+500\n");
        return 0;
    } else {
        printf("+200\n");
        return 0;
    }
    
    if (carro == 'n' && idade > 18 || idade < 50){
        printf("+500\n");
        return 0;
    }
    
    if (carro == 's'){
        printf("+200\n");
        return 0;
    }
    
    if (idade < 18 || idade > 50){
        printf("+200\n");
        return 0;
    }

    return 0;

}