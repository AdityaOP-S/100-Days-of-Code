#include <stdio.h>

int main() {
    int n, original, first, last, pow10 = 1, middle, swapped;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;
    last = n % 10;

    while (n >= 10) {
        n /= 10;
        pow10 *= 10;
    }
    first = n;

    if (original < 10) {
        printf("Swapped number = %d\n", original);
        return 0;
    }

    middle = (original % pow10) / 10;
    swapped = last * pow10 + middle * 10 + first;

    printf("Swapped number = %d\n", swapped);

    return 0;
}
