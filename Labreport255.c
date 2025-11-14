//Assingment Lab Report of MD.Merajul Islam Rifat
//ID:252-35-056
//Section: 45-B1
#include <stdio.h>

int main() {
    // Print full name
    printf("MD.Merajul Islam Rifat\n");

    // Declare variable for ID
    int ID;

    // Take input for ID
    printf("Enter your student ID:");
    scanf("%d", &ID);

    // Check if ID is even or odd
    if (ID % 2 == 0) {
        printf("Your ID is an even.\n");//printing even number if the condition is true.
    } else {
        printf("Your ID is an odd.\n");//printing odd number if the condition is true.
    }

    return 0;
}
