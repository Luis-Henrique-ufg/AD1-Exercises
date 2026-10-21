#include <stdio.h>

int main() {
    int a, b, c;
    char o1, o2, o3;

    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 1;
    }
    // a < b < c

    int temp = 0;
    if (a > b) {
        temp = a;
        a    = b;
        b    = temp;
    }
    if (a > c) {
        temp = a;
        a    = c;
        c    = temp;
    }
    if (b > c) {
        temp = b;
        b    = c;
        c    = temp;
    }

    if (scanf(" %c%c%c", &o1, &o2, &o3) != 3) {
        return 1;
    }

    if (o1 == 'A') {
        printf("%d", a);
    } else if (o1 == 'B') {
        printf("%d", b);
    } else if (o1 == 'C') {
        printf("%d", c);
    }

    if (o2 == 'A') {
        printf(" %d", a);
    } else if (o2 == 'B') {
        printf(" %d", b);
    } else if (o2 == 'C') {
        printf(" %d", c);
    }

    if (o3 == 'A') {
        printf(" %d\n", a);
    } else if (o3 == 'B') {
        printf(" %d\n", b);
    } else if (o3 == 'C') {
        printf(" %d\n", c);
    }

    return 0;
}