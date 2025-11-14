#include<stdio.h>

int main(){
    int ID;
    printf("SAFWAN IBN JANNAT MAHI\n");
     printf("Your DIU ID:");
        scanf("%d", &ID);
        printf("Your id Value: %d\n", ID);
    if (ID % 2 == 0)
    {
        printf("ID is Even\n");
    }
    else
    {
        printf("ID is Odd\n");
    }

    return 0;

}
