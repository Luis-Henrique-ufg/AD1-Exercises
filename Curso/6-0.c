#include <stdio.h>

void caractere(char chr, int n);

int main(){
    int num;
    
    for(;;){
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        if (!num){ /* num == 0 */
            break;
    }
        switch (num){
            case 7: caractere('*', 100); break;
            case 8: caractere('#', 100); break;
            case 9: caractere('$', 100); break;
        }
        
    }
    return 0;
}

void caractere(char chr, int n){
    int i = 0;

    for(i = 0; i < n; i++){     
        putchar(chr);
    }
    putchar('\n');
}