/* 1.Explain the procedure for installing CodeBlocks on your Computer and Construct a program to print
your information including your student ID, Name, Department, and University name in separate lines.
Solve the following problem using the C programming language. 
#include <stdio.h>
int main(){
    printf("Student id:252-35-255\n");
    printf("Name: Safwan Ibn Jannat Mahi\n");
    printf("Department: Department of Software Engineering\n");
    printf("University: DIU\n");
    return 0;  
}*/
/* 2

Solve the following problem using the C programming language.

If the marks obtained by a student in five different subjects are input through the keyboard,
calculate the aggregate marks and the average marks obtained by the student. 
Assume that the maximum mark that can be obtained by a student in each subject is 100. 
#include <stdio.h>
int main(){
    int marks1, marks2, marks3, marks4, marks5, aggregate, average;
    printf("Enter marks in 5 subjects: ");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);
    aggregate = marks1 + marks2 + marks3 + marks4 + marks5;
    average = aggregate / 5;
    printf("Aggregate marks: %d\n", aggregate);
    printf("Average marks: %d\n", average);
    return 0;
}*/
/* 3

Construct a program that calculates the gross salary for a salesperson at a computer manufacturing company. 
The company follows this monthly compensation policy:

Minimum base salary: $1500.00

Bonus for each computer sold: $200.00

Commission on total monthly sales: 2%

Your program should take as input the price of each computer and the number of computers sold during the month. 
#include <stdio.h>
int main(){
    float base_salary,gross_salary,bonus,commission,price_of_each_com,total_sales;
    int number_of_sol;
    printf("Enter the price of a computer:");
    scanf("%f",&price_of_each_com);

    printf("Enter The number of sold:");
    scanf("%d",&number_of_sol);
    base_salary=1500.00;
    bonus=200.00 * number_of_sol;
    total_sales=price_of_each_com * number_of_sol;
    commission= price_of_each_com * 0.02;
    gross_salary=base_salary+bonus+commission;
    printf("Gross Salary:%.2f\n",gross_salary);
    return 0;
}*/
/* 4 
Construct a program that follows this scenario,

If the ages of Arif, Fahmid, and Joy are input through the keyboard, 
write a program to determine and display the youngest of the three. 
#include <stdio.h>
int main(){
    int arif, Fahmid, Joy;
    printf("Enter the ages of Arif, Fahmid, and Joy:");
    scanf("%d %d %d", &arif, &Fahmid, &Joy);

    if (arif < Fahmid && arif < Joy) {
        printf("Arif is the youngest.\n");
    } else if (Fahmid < arif && Fahmid < Joy) {
        printf("Fahmid is the youngest.\n");
    } else {
        printf("Joy is the youngest.\n");
    }

    return 0;
}*/
    

/* 5

Construct a C program that performs addition, subtraction, multiplication, and 
division operations using a switch case statement. 
#include <stdio.h>
int main(){
    float num1, num2;
    char operator;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
    
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}*/

/* 6

Construct a program that computes the factorial value of any number entered via the keyboard. 
#include <stdio.h>
int main(){
    int num1,i;
    long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num1);

    if (num1 < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num1; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d is: %lld\n", num1, factorial);
    }
    
    return 0;
}*/
/* 7

Build a program that sorts an array of integers in ascending order 
#include <stdio.h>
int main(){
    int arr[100],n,i,j,temp;
    printf("Enter the Array size:");
    scanf("%d",&n);

    printf("Enter the %d eliments of the:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            } 
        }
    }
    printf("Sorted array in ascending order: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}*/

/* 8

Construct a program to print only the odd numbers from an array. 

#include <stdio.h>
int main(){
    int arr[100], n, i;

    printf("Enter the Array size:");
    scanf("%d",&n);

    printf("Enter the %d elements of the array:\n", n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Odd numbers in the array are: ");
    for(i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}*/

/* 9

Construct a program in the C programming language to print the elements of a 2D array. The array should have 3 rows and 3 columns. 
Your program should define a 2D array with dimensions 3x3 and print each element of the array,
row by row. The output should display each element separated by spaces, with each row printed on a new line.     
  
#include <stdio.h>
int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int row, col;

    printf("Elements of the 2D array:\n");
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            printf("%d ", arr[row][col]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}*/
/* 10

Build a program in C to count the total number of alphabets, digits, and special characters in a string. 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, special_chars = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string including spaces

    // Remove the newline character if present
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            // Exclude space from special characters if not desired,
            // but typically space is considered a special character in this context.
            // If you want to exclude space: if (str[i] != ' ') special_chars++;
            special_chars++;
        }
    }

    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", special_chars);

    return 0;
}*/
/* 11

Construct a program that will calculate the Fibonacci series using a User Defined Function. 
#include <stdio.h>

// Function to calculate Fibonacci series
void fibonacci(int n) {
    long long a = 0, b = 1, c;
    int i;

    printf("Fibonacci series up to %d terms:\n", n);

    for (i = 0; i < n; i++) {
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int num_terms;
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &num_terms);

    fibonacci(num_terms); // Call the user-defined function
    return 0;
}*/
/* 12

Solve the following problem,

Create a structure named employee to store information about an employee including the employee's name, ID, salary, and bonus.
Calculate the total compensation by adding the salary and bonus, then print the employee's name, ID, and total compensation in the output. */

#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int id;
    float salary;
    float bonus;
};

int main() {
    
    struct employee emp1;

    strcpy(emp1.name, "Safwan Mahi");
    emp1.id = 101;
    emp1.salary = 50000.0;
    emp1.bonus = 5000.0;

    float total_compensation = emp1.salary + emp1.bonus;
    printf("Employee Name: %s\n", emp1.name);
    printf("Employee ID: %d\n", emp1.id);
    printf("Total Compensation: %.2f\n", total_compensation);

    return 0;
}