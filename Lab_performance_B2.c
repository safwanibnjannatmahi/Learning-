/* Question 1: Write a C program that accepts an integer input representing a number (ranging from 0 to 50), and outputs the corresponding animal based on the following criteria:                                                                             12 Marks 

Marks Range    Grade
1 - 10    Cat 
11 - 20     Dog 
21 - 30 Cow
31 - 40    Elephant  
41 - 50    Donkey   

If the entered marks are outside the valid range (i.e., less than 0 or greater than 50), the program should display: "Not in Category ".

Ensure that the program uses if-else statements to implement the decision-making process for determining the animal. 
#include <stdio.h>
int main(){
    int num;

    printf("Enter the Marks for the grade:");

    scanf("%d",&num);

    
    if(num<0 || num>50){
        printf("Not in Category ");
        
    } 
    else if (num >= 1 && num <= 10){
        printf("The grade is Cat");
    }
    else if (num >=11 && num <= 20){
        printf("The grade is Dog");
    }
    else if (num >=21 && num <= 30){
        printf("The grade is Cow");
    }
    else if (num >=31 && num <= 40){
        printf("The grade is Elephent");
    }
    else if (num >=41 && num <= 50){
        printf("The grade is Donkey");
    }  


return 0;
}*/

/* Question 1: Write a C program that accepts an integer input representing a number (ranging from 0 to 50), and outputs the corresponding animal based on the following criteria:                                                                             12 Marks 

Marks Range    Grade
1 - 10    Cat 
11 - 20     Dog 
21 - 30 Cow
31 - 40    Elephant  
41 - 50    Donkey   

If the entered marks are outside the valid range (i.e., less than 0 or greater than 50), the program should display: "Not in Category ".

Ensure that the program uses if-else statements to implement the decision-making process for determining the animal.

Sample Input 1:
Enter the a number: 5
Sample Output 1:

Grade: Cat
Sample Input 2:
 
Enter the a number: 55
Sample Output 2:


Not in Category                

Question 2: Write a C program that efficiently finds the second largest element in a 1D array.

The program should use a single pass approach and should handle user input for the array size. If the array contains duplicate elements, they should be considered when determining the second largest element.

The program should first prompt the user to enter the size of the array.

The program should then read the elements of the array from the user.

The program should print the second largest element in the array.

If the array has fewer than two distinct elements, print an appropriate message (e.g., "There is no second largest element"). */
#include <stdio.h>
int main(){
    int arr[100],smallest,secsmallest,i,rang,rej=0;
    printf("Enter the range of the array:");
    scanf("%d",&rang);

    printf("Enter the Eliments of the Array:");

    for(i=0;i<rang;i++){
        scanf("%d",&arr[i]);
    }

    smallest=arr[0];
    secsmallest=arr[1];
    for(i=0;i<rang;i++){
        if(secsmallest<smallest){
            rej=smallest;
            secsmallest=smallest;
            secsmallest=rej;
        }


    }

    printf("The second Samlest number is:%d",&rej);
    return 0;
}

