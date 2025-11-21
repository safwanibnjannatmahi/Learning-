//------------------------------Lecture 1 problems---------------------------------------------------------------------


/* 1. Taking 2 integer numbers as input and then add, subtract, multiply and divide them.

Finally print the output results. 
#include <stdio.h>
int main(){
    int a, b, add, sub, mul, divide;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    add = a + b;
    sub = a - b;
    mul = a * b;
    divide = a / b;
    printf("Add: %d\n", add);
    printf("Sub: %d\n", sub);
    printf("Mul: %d\n", mul);
    printf("Divide: %d\n", divide);

    return 0;
}
*/

/* 2. Taking 3 float numbers and calculating the average of them. 

#include <stdio.h>
int main(){
    float a, b, C, ave;
    printf("enter the tree numbers: ");
    scanf("%f %f %f", &a, &b, &C);

    ave=(a+b+C)/3;
    printf("Avarage is : %f\n", ave);

    return 0;
}*/

/* 3. The length & breadth of a rectangle are input through the keyboard. Find out the

rectangle’s area. 

#include <stdio.h>
int main(){



    float length, breadth, area;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    printf("Area of rectangle is: %f\n", area);

    return 0;


}*/

/* 4. Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a

program to convert this temperature into Centigrade degrees. 

#include <stdio.h>
int main(){ 
    float fahrenheite, centigrade;
    printf("Enter the tempareture in fahrenheite:");
    scanf("%f", &fahrenheite);

    centigrade = (fahrenheite - 32) * 5/9;
    printf("Temperature in centigrade is: %f\n", centigrade);
    return 0;
}*/

/* 5. The distance between Mirpur and Ashulia is input through the keyboard in meters. Write

a program to convert and print this distance in feet, inches and centimeters.

1 meter=100 cm

1 meter=39.37 inch

1 meter=3.21 feet 

#include <stdio.h>
int main(){
    float meter, distance, feet, inches, centimeters;

    printf("Please Input the Meter distance between Ashulia and Mirpur:");
    scanf("%f", &distance);

    feet = distance * 3.21;
    inches = distance * 39.37;
    centimeters = distance * 100;

    printf("Distance in feet: %f\n", feet);
    printf("Distance in inches: %f\n", inches);
    printf("distance in centimeter: %f\n", centimeters);



    return 0;

}*/

/* 6. Niloys basic salary is input through the keyboard. His dearness allowance is 40% of his

basic salary and house rent is 20% of his basic salary. Write a program to calculate his

gross salary.

gross_salary=basic_salary+dearness_allowence+house_rent 

#include <stdio.h>
int main(){
    int salary, dearness_allowence, house_rent, gross_salary;

    printf("Input Niloys basic salary:");
    scanf("%d",&salary);

    dearness_allowence= salary * 0.40;

    house_rent= salary * 0.20;

    gross_salary= salary+dearness_allowence+house_rent;

    printf("Niloys Gross salary is:%d", gross_salary);

    return 0;

}*/

/*  7. If the marks obtained by a student in five different subjects are input through the

keyboard, find out the aggregate marks and average marks obtained by the student.

Assume that the maximum marks that can be obtained by a student in each subject is

100.
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
}
*/

/* 8. Printing a character with its ASCII value.
#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter a character: ");
    if (scanf(" %C", &ch) != 1) return 1;
    printf("Character: '%C'  ASCII value: %d\n", ch, (unsigned char)ch);
    return 0;
}
*/

//----------------------------------Lecture 3 problems----------------------------------------------------------



/* 1. Find out the largest between three numbers using conditional operator. 
#include <stdio.h>

int main(){
    int a, b, C, largest;
    printf("Enter the three numbers: ");
    if (scanf("%d %d %d", &a, &b, &C) != 3) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    // If all three are equal, report that first 
    if ((a == b) && (b == C)){
        printf("All three numbers are equal\n");
        return 0;
    }

    // Handle two-way ties explicitly 
    if ((a == b) && (a > C)) {
        printf("%d and %d are largest (equal)\n", a, b);
        return 0;
    }
    if ((a == C) && (a > b)) {
        printf("%d and %d are largest (equal)\n", a, C);
        return 0;
    }
    if ((b == C) && (b > a)) {
        printf("%d and %d are largest (equal)\n", b, C);
        return 0;
    }
    return 0;
}*/

/* 2. Find out if a number is odd or even using conditional operator. 

#include <stdio.h>
int main(){

    int a,even,odd;
    printf("Enter the two number:");
    scanf("%d",&a );
    
    if (a%2==0){
        printf("The number is Even");
    }

    else {
        printf("The number is Odd");
    }

 return 0;

}*/

/* 3. Find out if the input is an alphabet using conditional operator. 

#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %C", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("The character '%C' is an alphabet.\n", ch);
    } else {
        printf("The character '%C' is not an alphabet.\n", ch);
    }

    return 0;
}*/



/*  4. A computer manufacturing company has the following monthly compensation policy to the sales-person:

Minimum base salary: 1500.00

Bonus for every computer sold: 200.00

Commission on the total monthly sales: 2%

 Write a program to calculate the gross salary for a sales person. You will take input the price of each computer and the number of sold during the month.

 #include <stdio.h>
 int main(){

     float base_salary, gross_salary, price_of_each_com, bonus=200.00, num_0f_sold, comm, monthly_sale;

    printf("enter the base salary of a sale person:");
    scanf("%f",&base_salary);


    printf("Input the price of one computer:");
    scanf("%f",&price_of_each_com);

    printf("Input the number of Sold:");
    scanf("%f",&num_0f_sold);

    monthly_sale = bonus * num_0f_sold;

    comm= monthly_sale * 0.2;

    gross_salary= base_salary + monthly_sale + comm;

    printf("Gross Salary is: %f", gross_salary);
return 0;

 }*/

 /* 5.If the total selling price of 15 items and the total profit earned on them is 
 input through the keyboard, write a program to find the cost price of one item. 

 #include <stdio.h>
 int main(){
    int item;
    float total_selling_price , total_profit ,one_item_selling_price ,one_item_profit ,cost_price;

    printf("Please Inpute the Item quantity:");
    scanf("%d", &item  );

    printf("Please input the total Selling price:");
    scanf("%f", &total_selling_price);

    printf("Please Inpute the total profit price:");
    scanf("%f", &total_profit);


    one_item_selling_price= total_selling_price / item;

    one_item_profit= total_profit / item;
    
    cost_price= one_item_selling_price - one_item_profit;

    printf("The cost price of one item is:%f", cost_price );

    return 0;
}
*/


//----------------------------------lecture 4 --------------------------------------------------------------------------

/* 2. Write a C program to input a character from the user and check whether the given
 character is alphabet or not an alphabet using if else. 

#include <stdio.h>
int main(){

    char alphabet;

    printf("Plz input an charecter:");
    scanf("%C", &alphabet);

    if ((alphabet >= 'A' && alphabet <='Z') ||(alphabet >='a' && alphabet <= 'z')) {
        printf("The charecter is an alphabet\n");
    }

    else{ printf("The charecter is not an alphabet\n");}
    return 0;
}*/


/* 3. Write a program to check whether a triangle is valid or not, when the three angles of 
the triangle are entered through the keyboard. A triangle is valid if the sum of all the three 
angles is equal to 180 degrees.  
#include <stdio.h>
int main (){
    int angle1, angle2, angle3, sum;

    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    sum = angle1 + angle2 + angle3;

    if (sum == 180) {
        printf("The triangle is valid\n");
    } else {
        printf("The triangle is not valid\n");
    }

    return 0;
}*/

/* 4. Write a C program to check leap years using if else. 
#include <stdio.h>
int main(){
    int year;
    printf("Inter the year you want to check if it leap year or not;:");
    scanf("%d", &year);

    if ((year % 4 ==0 && year % 100 != 0)||(year % 100 ==0)){
        printf("%d is a leap Year.", year);
    }
    else {printf("%d is not a leap year", year);
    }
    return 0;
}*/

/* 5. If the ages of Arif, Fahmid and Joy are input through the keyboard,
      write a program to determine the youngest of the three. 
#include <stdio.h>
int main(void){
    int arif, fahmid, joy;

    printf("Input the age of Arif: ");
    scanf("%d", &arif);

    printf("Input the age of Fahmid: ");
    scanf("%d", &fahmid);

    printf("Input the age of Joy: ");
    scanf("%d", &joy);

    if (arif < fahmid && arif < joy) {
        printf("Arif is the youngest (%d)\n", arif);
    } else if (fahmid < arif && fahmid < joy) {
        printf("Fahmid is the youngest (%d)\n", fahmid);
    } else if (joy < arif && joy < fahmid) {
        printf("Joy is the youngest (%d)\n", joy);
    } else {
        printf("There is a tie for the youngest age.\n");
    }

    return 0;
}
*/

/* 6. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, calculate percentage and grade according to given conditions:

            If percentage >= 90% : Grade A

            If percentage >= 80% : Grade B

            If percentage >= 70% : Grade C

            If percentage >= 60% : Grade D

            If percentage >= 40% : Grade E

            If percentage < 40% : Grade F 
#include <stdio.h>
int main(){
    int id;
    float phy,chem,bio,math,com,all_sub,percentage,grade;
    printf("please Input your student id:");
    scanf("%d",&id);

    printf("Now Inter Five subject Marks In a sequential order (phy,chem,bio,math,com):");
    scanf("%f %f %f %f %f",&phy,&chem,&bio,&math,&com );

    all_sub= phy+chem+bio+math+com;

    percentage=(all_sub/500)*100;

    if (percentage >= 90){
        printf("%d your grade is 'A'", id);
    }
    else if (percentage >= 80){
        printf("%d your grade is 'B'", id);
    }
    else if (percentage >= 70){
        printf("%d your grade is 'C'", id);
    }
    else if (percentage >= 60){
        printf("%d your grade is 'D'", id);
    }
    else if (percentage >= 40){
        printf("%d your grade is 'E'", id);
    }
    else if (percentage < 40){
        printf("%d your grade is 'F'", id);
    }
    else {
        printf("Maybe Your given Number is invalid");
    }
return 0;
}*/


/* 7. An electric power distribution company charges its domestic consumers as follows:

Consumption Units Rate of Charge

0 – 200 Rs. 0.50 per unit

201 – 400 Rs. 100 plus Rs. 0.65 per unit excess of 200

401 – 600 Rs. 230 plus Rs. 0.80 per unit excess of 400

601 and above Rs. 390 plus Rs. 1.00 per unit excess of 600

 

Write a program that reads the power consumed by a customer and prints the amount to be paid by the customer. 
#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 200) {
        bill = units * 0.50;
    }
    else if (units <= 400) {
        bill = 100 + (units - 200) * 0.65;
    }
    else if (units <= 600) {
        bill = 230 + (units - 400) * 0.80;
    }
    else {
        bill = 390 + (units - 600) * 1.00;
    }

    printf("Total Bill: Rs. %.2f\n", bill);

    return 0;
}*/

/* 8. Write a c program for +,-,*,/operation using switch case. 
#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;

        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 0;
            }
            printf("Result: %.2f\n", result);
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}*/

//--------------------------------------Loop------------------------------------------------------------------------

/* 2.WAP to sum up numbers in a range. (For example: from 1 to 10) 
#include <stdio.h>
int main(){
    int num1,num2 ,sum=0;
    printf("Please inter the Number you want to star from: ");
    scanf("%d",&num1);

    printf("Now Inter the number you want to end:");
    scanf("%d",&num2);
    

    while(num1 <= num2){
        sum = sum + num1;
        num1++;
    }
    printf("The sum is: %d\n", sum);
return 0;
}*/

/* 3.If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.  
#include <stdio.h>
int main(){
    int num,sum=0,remainder;
    printf("Please Inter the five digit number or more you want:");
    scanf("%d",&num);

    while(num !=0){
        remainder=num%10;
        sum=sum+remainder;
        num=num/10;
    }
    printf("Thse Sum of your input Digits:%d", sum);
    return 0;
}
*/

/* A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not. 
#include <stdio.h>
int main(){
    int original, rev = 0, rem = 0, temp;
    printf("Enter a five-digit number: ");
    scanf("%d", &original);

    temp = original;
    while(temp != 0){
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    
    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", rev);
    
    if (original == rev){
        printf("The numbers are equal (palindrome).\n");
    }
    else{
        printf("The numbers are not equal.\n");
    }
    
    return 0;
}*/




/* Write a program to find the factorial value of any number entered through the keyboard. 
#include <stdio.h>
int main(){
    int num,i;
    long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d is: %11d\n", num, factorial);
    }
    
    return 0;
}*/

/* Write a program to print all prime numbers in a range. 
#include <stdio.h>

int main(){
    int start, end, i, j, is_prime;
    
    printf("Enter the start of range: ");
    scanf("%d", &start);
    
    printf("Enter the end of range: ");
    scanf("%d", &end);
    
    printf("Prime numbers between %d and %d are:\n", start, end);
    
    for (i = start; i <= end; i++) {
        
        
        is_prime = 1;
        for (j = 2;  j*j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        
        if (is_prime) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}*/

/* Check the following number prime or not by taking input from the user. 
#include <stdio.h>
int main(){
    int i,num,count;
    printf("Enter the number:");
    scanf("%d",&num);

    for(i=2;i*i<=num;i++){
         if (num % i ==0){
            count=0;
            break;
            

         }
        }

    if (count){
        printf("The number %d is prime number", num);
    }
    else { printf("The number %d is not prime number", num);
    }
        
    

} */

/* Print Fibonacci series up to a certain number by taking input from the user. 
#include <stdio.h>
int main(){
    int n, i;
    long long a = 0, b = 1, c;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series up to %d terms:\n", n);
    
    for(i = 0; i < n; i++){
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    
    return 0;
}*/

/* Print the following pattern. 

     1 

     2 1 

     3 2 1

     4 3 2 1 

     5 4 3 2 1 


    #include <stdio.h>
    int main(){
        int i, j;
        
        for(i = 1; i <= 5; i++){
            for(j = i; j >= 1; j--){
                printf("%d ", j);
            }
            printf("\n");
        }
        
        return 0;
    }*/