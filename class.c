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
    strcpy(emp1.name, "Sadman Sadi"); 
    emp1.id = 101; 
    emp1.salary = 50000.0; 
    emp1.bonus = 5000.0; 
    float total_compensation = emp1.salary + emp1.bonus; 
    printf("Employee Name: %s\n", emp1.name); 
    printf("Employee ID: %d\n", emp1.id); 
    printf("Total Compensation: %.2f\n", total_compensation); 
    return 0;
}