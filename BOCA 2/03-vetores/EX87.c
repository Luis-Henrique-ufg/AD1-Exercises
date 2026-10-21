#include <math.h>
#include <stdio.h>

int main() {
    int N;
    double ax, ay, az;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    scanf("%lf %lf %lf", &ax, &ay, &az);

    for (int i = 1; i < N; i++) {
        double bx, by, bz;
        scanf("%lf %lf %lf", &bx, &by, &bz);

        double d = sqrt(pow(bx - ax, 2) + pow(by - ay, 2) + pow(bz - az, 2));

        printf("%.2f\n", d);

        ax = bx;
        ay = by;
        az = bz;
    }
}
