/* Construct a program in C to find the maximum and minimum values in a 1D array of integers.
 The program should take the number of elements from the user in the array and the elements themselves. 
#include <stdio.h>
int main(){
    int arr[100],n,i,maximum,minimum;

    printf("Enter the Array size:");
    scanf("%d",&n);

    printf("Enter the %d eliments of the:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
maximum= arr[0];
    for(i=0;i<n;i++){
        if(maximum < arr[i]){
            maximum = arr[i];
        }
    }
minimum= arr[0];
    for(i=0;i<n;i++){
        if(minimum > arr[i]){
            minimum = arr[i];
        }
    }

printf("The maximum Number in the array=%d\n The minimum Number in the array=%d",maximum,minimum);
}*/
/* Code a C program that reads n integers from the user and stores them in a 1D array. 
The program should then reverse the elements and store them in another array. Finally, print the original and reversed arrays.
 
 #include <stdio.h>
 int main(){
    int arr[100],range,i,reversearr[100],n;
    
    printf("Enter the Size of the array:");
    scanf("%d",&n);

    printf("Enter the %d elements of the array:\n",n);
    for(i=0;i < n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        reversearr[i] = arr[n-1-i];
    }
    
    printf("Original array: ");
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\nReversed array: ");
    for(i=0; i<n; i++) printf("%d ", reversearr[i]);
    printf("\n");
    return 0;
 }*/

 /* Compose a program in C that achieves the following objectives:

Takes input from the user to fill a 3x3 matrix.

Asks the user to provide a value to search within the matrix.

Searches for the provided value in the matrix.

If the value is found, the program should print the indices (row and column) of the 2D array where the value
is located.

If the value is not found, the program should indicate that the value is not present in the matrix. 
#include <stdio.h>
int main(){
    int arr[3][3],row,col;

    printf("Enter the 3X3 Matrix value");
    for(row=0;row < 3; row++){
        for(col=0; col<3;col++){
            scanf("%d",&arr[row][col]);

        }

        
    }
    int search_value;
    printf("Enter the value to search: ");
    scanf("%d", &search_value);

    int found = 0; // Flag to indicate if the value is found
    int found_row, found_col;

    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            if(arr[row][col] == search_value){
                found = 1;
                found_row = row;
                found_col = col;
                break; // Exit inner loop once found
            }
        }
        if(found){
            break; // Exit outer loop once found
        }
    }

    if(found){
        printf("Value %d found at index [%d][%d]\n", search_value, found_row, found_col);
    } else {
        printf("Value %d not found in the matrix.\n", search_value);
    }
    return 0;
}*/

/* Build a C program that takes three strings as input from the user and concatenates them into a single string.
After concatenating the strings, find the length of the resulting concatenated string and display it. 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100], result[300];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Enter the third string: ");
    scanf("%s", str3);

    // Concatenate strings
    strcpy(result, str1); 
    strcat(result, str2); 
    strcat(result, str3); 

    printf("Concatenated string: {%s}\n", result);

   
    printf("Length of the concatenated string: %lu\n", strlen(result));

    return 0;
}*/

/* Construct a C program that takes a string input from the user and searches for spaces within the string.
 If a space is found, the program should print "Found"; if no spaces are found, it should print "Not Found". 

#include <stdio.h>
#include <string.h>

 int main() {
    char str[200];
    int i, found_space = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read the whole line including spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            found_space = 1;
            break;
        }
    }

    if (found_space) printf("Found\n");
    else printf("Not Found\n");

    return 0;
 }*/
