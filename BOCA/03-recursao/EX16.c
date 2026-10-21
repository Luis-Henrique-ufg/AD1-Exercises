#include <stdio.h>

int fibonacci(int n);

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        printf("%d ", fibonacci(i));
    }
}

int fibonacci(int n)
{
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
