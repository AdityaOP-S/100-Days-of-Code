#include <stdio.h>

int main() {
    int a, b, n1, n2, temp, hcf, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    n1 = a;
    n2 = b;

    while (n2 != 0) {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    hcf = n1;
    lcm = (a * b) / hcf;

    printf("LCM of %d and %d = %d\n", a, b, lcm);

    return 0;
}
