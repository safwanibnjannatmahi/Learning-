#include<stdio.h>
int main (){
    int Id;
    
    float mark1;
    float mark2;
    float mark3;
    float mark4;
    float mark5;
    float grade;
    float SGPA;

    printf("ID: ");
    scanf("%d", &Id);
    
    printf("Enter marks for 5 subjects separated by spaces:\n");
    scanf("%f %f %f %f %f", &mark1, &mark2, &mark3, &mark4, &mark5);

    grade = (mark1 + mark2 + mark3 + mark4 + mark5) / 5.0;

    // SGPA point part
    if (grade >= 80){
        SGPA = 4.00;
        printf("The SGPA is: 4.00\n");
    }
    else if (grade >= 75){
        SGPA = 3.75;
        printf("The SGPA is: 3.75\n");
    }
    else if (grade >= 70){
        SGPA = 3.50;
        printf("The SGPA is: 3.50\n");
    }
    else if (grade >= 65){
        SGPA = 3.25;
        printf("The SGPA is: 3.25\n");
    }
    else if (grade >= 60){
        SGPA = 3.00;
        printf("The SGPA is: 3.00\n");
    }
    else if (grade >= 55){
        SGPA = 2.75;
        printf("The SGPA is: 2.75\n");
    }
    else if (grade >= 50){
        SGPA = 2.50;
        printf("The SGPA is: 2.50\n");
    }
    else if (grade >= 45){
        SGPA = 2.25;
        printf("The SGPA is: 2.25\n");
    }
    else if (grade >= 40){
        SGPA = 2.00;
        printf("The SGPA is: 2.00\n");
    }
    else{
        // Check if any subject has marks less than 40 (F grade)
        if (mark1 < 40 || mark2 < 40 || mark3 < 40 || mark4 < 40 || mark5 < 40) {
            SGPA = 0.00;
            printf("The SGPA is: 0.00\n");
        } else {
            SGPA = 2.00;
            printf("The SGPA is: 2.00\n");
        }
    }
    // SGPA grade part
    if (SGPA == 4.00){
        printf("Grade: A+\n");
    }
    else if (SGPA == 3.75){
        printf("Grade: A\n");
    }
    else if (SGPA == 3.50){
        printf("Grade: A-\n");
    }
    else if (SGPA == 3.25){
        printf("Grade: B+\n");
    }
    else if (SGPA == 3.00){
        printf("Grade: B\n");
    }
    else if (SGPA == 2.75){
        printf("Grade: B-\n");
    }
    else if (SGPA == 2.50){
        printf("Grade: C\n");
    }
    else if (SGPA == 2.25){
        printf("Grade: D+\n");
    }
    else if (SGPA == 2.00){
        printf("Grade: D\n");
    }
    else{   
        printf("Grade: F\n");
    }  
    return 0;
}
