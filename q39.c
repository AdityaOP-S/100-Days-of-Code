#include <stdio.h>

int main() {
    int n, temp, rem, prod = 1, found = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n < 0 ? -n : n;

    while (temp != 0) {
        rem = temp % 10;
        if (rem % 2 != 0) {
            prod *= rem;
            found = 1;
        }
        temp /= 10;
    }

    if (!found) {
        prod = 0;
    }

    printf("Product of odd digits of %d = %d\n", n, prod);

    return 0;
}
