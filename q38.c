#include <stdio.h>

int main() {
    int n, temp, sum = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    printf("Sum of digits of %d = %d\n", n, sum);

    return 0;
}
