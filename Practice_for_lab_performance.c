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
    float a, b, c, ave;
    printf("enter the tree numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    ave=(a+b+c)/3;
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
    if (scanf(" %c", &ch) != 1) return 1;
    printf("Character: '%c'  ASCII value: %d\n", ch, (unsigned char)ch);
    return 0;
}
*/

/* 1. Find out the largest between three numbers using conditional operator. 
#include <stdio.h>

int main(){
    int a, b, c, largest;
    printf("Enter the three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    // If all three are equal, report that first 
    if ((a == b) && (b == c)){
        printf("All three numbers are equal\n");
        return 0;
    }

    // Handle two-way ties explicitly 
    if ((a == b) && (a > c)) {
        printf("%d and %d are largest (equal)\n", a, b);
        return 0;
    }
    if ((a == c) && (a > b)) {
        printf("%d and %d are largest (equal)\n", a, c);
        return 0;
    }
    if ((b == c) && (b > a)) {
        printf("%d and %d are largest (equal)\n", b, c);
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
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("The character '%c' is an alphabet.\n", ch);
    } else {
        printf("The character '%c' is not an alphabet.\n", ch);
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
