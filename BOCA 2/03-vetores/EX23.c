#include <stdio.h>
#include <stdbool.h> 

int main(){
    int n, resto = 0;
    scanf("%d", &n);

    bool five = false, three = false;
    
    while (n > 0){
        resto += n % 10;
        n /= 10;
}

    if (n % 10 == 0 || n % 10 == 5){
        five = true;
    }

    if (resto % 3 == 0){
        three = true;
   }

    if (five == true && three == true){
        printf("O NUMERO E DIVISIVEL\n");
    } else {
        printf("O NUMERO NAO E DIVISIVEL\n");
    }
    return 0;
}


/*
75 > 0 TRUE
resto = 5
7


75

75 % 10 = 5

7 + 5 

75 % 10 = 5
7 % 10 = 7 

*/