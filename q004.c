#include <stdio.h>

int main() {
    int radius, area, circumference;
    int pi = 3;

    printf("Enter radius: ");
    scanf("%d", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area = %d\n", area);
    printf("Circumference = %d\n", circumference);

    return 0;
}
