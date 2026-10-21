#include <stdio.h>

void naturais(int n);

int main(){
    int n;
    scanf("%d", &n);

    naturais(n);

    return 0;
}

void naturais(int n){
    if (n == 1){
        printf("%d ", n);
    } else {
        naturais(n - 1);
        printf("%d ", n);
    }
}