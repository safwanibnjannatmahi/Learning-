#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    // Convert b to integer to extract middle digit
    int b_int = (int)b;
    int digits[10], count = 0;
    int temp = b_int;

    int middle_digit;
    if (count == 0) {
        middle_digit = 0;
    } else {
        middle_digit = digits[count / 2];
    }

    if (middle_digit % 2 == 0) {
        printf("Product: %.2f\n", a * b * c);
    } else {
        printf("Sum: %.2f\n", a + b + c);
    }

    return 0;
}