#include <stdio.h>
int main(){
    char answer;
    printf("Do you really like cats?:");
    printf("Yes or No?:");
    scanf(" %c", &answer);
    if (answer == 'Y' || answer == 'y'){
        printf("  __                        \n ");
        printf("(  \\                       \n ");
        printf(" )  )                      \n");
        printf(" (  ( .-''''-.  A.-.A       \n");
        printf("  \\ \\/        \\/ , , \\      \n");
        printf("   \\ \\        =;  t  /=      \n");
        printf("    \\     |''''.',--'      \n");
        printf("    // //     |  ||     \n");
        printf("   / __,))    |__,))    \n");
    }
    else if (answer == 'N' || answer == 'n'){
        printf("  __                        \n ");         
    }
    return 0;
}





