#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    double A, B, C;
    if (scanf("%lf %lf %lf", &A, &B, &C) != 3) {
        return 1;
    }

    bool result = false;

    result = abs(B - C) < A && A < B + C ? true : false;

    result = abs(A - C) < B && B < A ? true : false;

    result = abs(A - B) < C && C < A + B ? true : false;

    if (result) {
        double perimetro = A + B + C;
        printf("Perimetro = %.1f\n", perimetro);
    } else {
        double area = ((A + B) * C) / 2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}