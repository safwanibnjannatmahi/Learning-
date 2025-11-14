#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;         // take last digit
        reverse = reverse * 10 + remainder; // build reversed number
        num = num / 10;               // remove last digit
    }

    printf("Mirror image: %d\n", reverse);

    return 0;
}

