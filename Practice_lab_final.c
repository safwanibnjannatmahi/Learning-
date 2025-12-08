/* Scenario 1: The Electricity Bill Calculator (Conditions)
The Story: The Power Company charges for electricity based on "slabs" (tiers). 
They need a program to calculate the bill for customers automatically.

The Rules:

First 50 units: 5 Taka per unit.

Next 100 units (51-150): 8 Taka per unit.

Unit above 150: 10 Taka per unit.

Surcharge: Add a fixed service charge of 20% to the total bill amount. 
#include <stdio.h>
int main(){
    float unite, bill = 0, surcharge;
    printf("Enter the unite:");
    scanf("%f",&unite);

    if (unite <= 50){
        bill = unite * 5;
    } else if (unite <= 150) {
        bill = (50 * 5) + ((unite - 50) * 8);
    } else {
        bill = (50 * 5) + (100 * 8) + ((unite - 150) * 10);
    }

    surcharge = bill * 0.20;
    bill += surcharge;

    printf("Total electricity bill: %.2f Taka\n", bill);

    return 0;
}*/
/* Scenario 2: The ATM Security System (Loops)
The Story: You are writing the security code for an ATM. The user has a secret PIN (e.g., 1234).

The Task:

Ask the user to "Enter PIN".

Check if the input matches the correct PIN.

The Catch: The user only gets 3 attempts.

If they enter the correct PIN, print "Welcome!" and break the loop.

If they fail, print "Wrong PIN, Try Again" and let them try again.

If they fail 3 times, print "Card Blocked" and exit. 
#include <stdio.h>
int main(){
    int pin =1234,correct_pin,counter;
    
    for(counter=1;counter<=3;counter++){
        printf("PIN:");
        scanf("%d",&correct_pin);

        if(pin == correct_pin){
            printf("Welcome");
            break;
        }
        else if(counter == 3){
            printf("Card Blocked");
            break;
        }
        else{
            printf("Wrong PIN, Try Again\n");
        }
    }
}*/
/* Scenario 3: The "Class Topper" Finder (1D Arrays)
The Story: The logic is simple: Find the highest number in a list. But in the exam, they frame it as "Student Marks".

The Task:

Create an array to store marks of 10 students: int marks[10];

Use a loop to take input for all 10 students.

Write logic to traverse the array and find the Maximum mark.

Print the highest mark and the index (Roll number) of that student. 
#include <stdio.h>
int main(){
    int student_marks[10], highest, i, highest_index = 0;

    printf("Enter the student marks for 10 students:\n");
    for(i = 0; i < 10; i++){
        printf("Student %d: ", i + 1);
        scanf("%d", &student_marks[i]);
    }
    highest = student_marks[0];
    for(i = 1; i < 10; i++){ // Start from 1 as 0 is already considered
        if(student_marks[i] > highest){
            highest = student_marks[i];
            highest_index = i; // Store the index of the highest mark
        }
    }
    printf("The highest mark is: %d (Student Roll Number: %d)\n", highest, highest_index + 1); // Add 1 to index for roll number
    return 0;
}*/
/* Scenario 4: The Cinema Hall Seating (2D Arrays)
The Story: A small cinema hall has 3 rows and 3 seats per row (a 3x3 matrix). Some seats are booked (represented by 1) and some are empty (represented by 0).

The Task:

Initialize a 2D array with some dummy data:

C

int seats[3][3] = {
    {1, 0, 1},
    {1, 1, 0},
    {0, 0, 0}
};
Count how many seats are Empty (count the zeros).

Count how many seats are Booked (count the ones).

Print the results. 

#include <stdio.h>

int main() {
    int seats[3][3] = {
        {1, 0, 1},
        {1, 1, 0},
        {0, 0, 0}
    };

    int empty_seats = 0;
    int booked_seats = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (seats[i][j] == 0) {
                empty_seats++;
            } else {
                booked_seats++;
            }
        }
    }

    printf("Number of empty seats: %d\n", empty_seats);
    printf("Number of booked seats: %d\n", booked_seats);

    return 0;
}*/

/* Scenario 5: The "Palindrome" Detector (Strings)
The Story: A secret agency sends messages that are valid only if they read the same forward and backward (like "MADAM" or "LEVEL").

The Task:

Take a string input from the user (e.g., char word[50];).

Logic:

Calculate the length of the string.

Check if the first character matches the last, the second matches the second-to-last, etc.

If it matches, print "Valid Message". If not, print "Invalid Message".
#include <string.h>

int main() {
    char word[50];
    int length, i, is_palindrome = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    length = strlen(word);

    for (i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("Valid Message\n");
    } else {
        printf("Invalid Message\n");
    }

    return 0;
}*/

 