#include <stdio.h>

int main() {
    int principal, rate, time;
    int si, ci, amount, i;

    printf("Enter principal: ");
    scanf("%d", &principal);

    printf("Enter rate: ");
    scanf("%d", &rate);

    printf("Enter time: ");
    scanf("%d", &time);

    si = (principal * rate * time) / 100;

    amount = principal;
    for (i = 0; i < time; i++) {
        amount = amount + (amount * rate) / 100;
    }
    ci = amount - principal;

    printf("Simple Interest = %d\n", si);
    printf("Compound Interest = %d\n", ci);

    return 0;
}
