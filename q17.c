#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    int r1, r2;

    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: %d and %d\n", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Roots are real and equal: %d and %d\n", r1, r1);
    } else {
        printf("Roots are complex and imaginary.\n");
    }

    return 0;
}
