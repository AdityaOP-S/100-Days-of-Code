#include <stdio.h>

int main() {
    int n, original, temp, rem, sum = 0, digits = 0, i, pow;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        pow = 1;
        for (i = 0; i < digits; i++) {
            pow *= rem;
        }
        sum += pow;
        temp /= 10;
    }

    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
