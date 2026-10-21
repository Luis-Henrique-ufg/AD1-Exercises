#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x < 1) {
        printf("Y = %d", x);
    } else if (x == 1) {
        printf("Y = 0");
    } else if (x > 1) {
        printf("Y = %d", x * x);
    }

    return 0;
}