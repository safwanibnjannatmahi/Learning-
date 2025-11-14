#include <stdio.h>

/*int main() {
    int sum = 0;
    for (int i = 1000; i <= 2000; i += 2) {
        printf("%d\n", i);
        sum += i;
    }
    printf("Total sum: %d\n", sum);
    return 0;
}*/

/*int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 4 == 0 && year % 100 != 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}*/

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num > 0) {
        case 1:
            printf("%d is positive.\n", num);
            break;

        case 0:
            switch  (num< 0){
            printf("%d is negative.\n", num);
            break;

            printf("The number is zero.\n");
            break;}
        break;
    }
    return 0;
}
