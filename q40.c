#include <stdio.h>

int main() {
    char bin[100];
    int i = 0;

    printf("Enter a binary number: ");
    scanf("%s", bin);

    while (bin[i] != '\0') {
        if (bin[i] == '0') {
            bin[i] = '1';
        } else if (bin[i] == '1') {
            bin[i] = '0';
        }
        i++;
    }

    printf("1's complement = %s\n", bin);

    return 0;
}
