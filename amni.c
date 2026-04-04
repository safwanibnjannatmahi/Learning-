
#include <stdio.h>

int main() {
    int ID;

    printf("Name: SAFWAN IBN JANNAT MAHI\n");
    printf("Enter your student ID: ");
    scanf("%d", &ID);

    if (ID % 2 == 0) {
        printf("ID is Even\n");
    } else {
        printf("ID is Odd\n");
    }

    return 0;
}