#include <stdio.h>

int main() {
    char a,b;
    printf("Who is the best for you\n a or b:" );
    scanf("%s %s", &a,&b);
    if (a)
    {
        printf("You chose a");
    }
    else
    {
        printf("You chose b");
    }

   
   
   
    return 0;
}