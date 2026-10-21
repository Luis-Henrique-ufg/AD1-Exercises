#include <stdio.h>

int main(void){
    int A, B;
    scanf("%d%d", &A, &B);

    printf("%.3f", (float) (A + B) / 2);

    return 0;
}