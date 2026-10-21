#include <math.h>
#include <stdio.h>

int main(void){
    float n;
    scanf("%f", &n);

    printf("%.6f\n", roundf(n * 10.0f) / 10.0f);
    printf("%.6f\n", roundf(n * 100.0f) / 100.0f);
    printf("%.6f\n", roundf(n * 1000.0f) / 1000.0f);

    return 0;
}