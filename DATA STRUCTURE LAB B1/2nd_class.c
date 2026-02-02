//Array insertion ------------------------------------------------------------------------- 
#include <stdio.h>
#define MAX 100

int main(){
    int arr[MAX];
    int n,i,pos,value;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    if (n >= MAX){
        printf("Over flow! Array is already full.\n");
        return 0;
    }

    printf("Enter the %d elements of the array:",n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter position to insert:");
    scanf("%d",&pos);

    if (pos < 1 || pos > n + 1){
        printf("Invalid position!\n");
        return 0;
    }

    printf("Enter value to insert:");
    scanf("%d",&value);

    for (i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }

    arr[pos-1]=value;
    n++;

    printf("Array after insertion:");
    for (i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
//delete code --------------------------------------------------------------------------------------------
    int del_value;
    int j;
    printf("What number you want to delete:");
    scanf("%d",&del_value);
    for (i=0;i<n;i++){
        if (arr[i]==del_value){
            for (j=i;j<n-1;j++){    // remember one thing when we start the work for iner loop we should use j or anything 
            arr[j]=arr[j+1];       //  not similer of i (in short we have to use different Index name like i.j etc ).
            }
            n--;
            break;
        }
    }

    printf("Array after deletion:");
    for (i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
//sorting the array with user define function.

void insertionSort (int arr[],int n)
{
    int i,j,temp;
    for (i=0;i<n;i++)
    {
        j= i-1;
        temp= arr[i];

        while(arr[j]>temp && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]= temp;
    }
}
printf("Sorted element 0f the array:");
insertionSort(arr,n);
for (i=0;i<n;i++){
    printf("%d ",arr[i]);
}

return 0;
} 








