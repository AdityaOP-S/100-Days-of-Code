#include <stdio.h>

int main() {
    int n, original, temp, rem, sum = 0, fact, i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp > 0) {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if (original > 0 && sum == original) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
}
