#include <stdio.h>

int main() {
    int n, i;
    int prod = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in range 1 to %d.\n", n);
        return 0;
    }

    for (i = 2; i <= n; i += 2) {
        prod *= i;
    }

    printf("Product of even numbers from 1 to %d = %d\n", n, prod);

    return 0;
}
