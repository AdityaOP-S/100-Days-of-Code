#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n >= 1) {
        sum = 1.0;
        for (i = 2; i <= n; i++) {
            sum += (double)(2 * i - 1) / (2 * i);
        }
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
