#include <stdio.h>

int main()
{
    int qty[100];
    char name[100][30];
    int n, i;
    int ch = 0;
    int id, add;

    printf("Enter number of fruits: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter name of fruit %d: ", i+1);
        scanf("%s", name[i]);
        printf("Enter quantity of %s: ", name[i]);
        scanf("%d", &qty[i]);
    }

    while(ch != 4)
    {
        printf("\nGrocery Shop Inventory System\n");
        printf("1. Check Stock Status\n");
        printf("2. Restock a Fruit\n");
        printf("3. Display All Fruits\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\nStock Status:\n");
                for(i=0; i<n; i++)
                {
                    printf("%s - ", name[i]);
                    if(qty[i] == 0)
                        printf("OUT OF STOCK\n");
                    else if(qty[i] < 5)
                        printf("LOW STOCK\n");
                    else
                        printf("AVAILABLE\n");
                }
                break;

            case 2:
                printf("\nEnter fruit number to restock (1 to %d): ", n);
                scanf("%d", &id);

                if(id > 0 && id <= n)
                {
                    printf("Enter quantity to add: ");
                    scanf("%d", &add);
                    qty[id-1] = qty[id-1] + add;
                    printf("%s has been restocked. New quantity: %d\n", name[id-1], qty[id-1]);
                }
                else
                {
                    printf("Invalid fruit number\n");
                }
                break;

            case 3:
                printf("\nFruit List:\n");
                for(i=0; i<n; i++)
                {
                    printf("%d. %s - Quantity: %d\n", i+1, name[i], qty[i]);
                }
                break;

            case 4:
                printf("Exiting program. Thank you!\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}