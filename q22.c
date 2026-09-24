#include <stdio.h>

int main() {
    int cp, sp, profit, loss, percentage;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d", &cp, &sp);

    if (sp > cp) {
        profit = sp - cp;
        percentage = (profit * 100) / cp;
        printf("Profit = %d\nProfit Percentage = %d%%\n", profit, percentage);
    } else if (cp > sp) {
        loss = cp - sp;
        percentage = (loss * 100) / cp;
        printf("Loss = %d\nLoss Percentage = %d%%\n", loss, percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
