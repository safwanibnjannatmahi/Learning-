#include <stdio.h>
int main(){
    int arr[100] = {92,48,67,14,15};
    int item ,j,flag =0,possition=0;

    printf("Enter the key value:");
    scanf("%d",&item);
    
    for (int i=0; i<5; i++)
    {
        if (arr[i]==item)
        {
            flag=1;
            arr[i]=possition;
            
        }
    }
    if (flag==1)
        printf("item found And the possition is %d",possition + 1);
    else
        printf("item not found");

    for (i=0; i< 5-1; i++)
    {
        for(j=0;j< 5-i-1;j++ ){
            if (arr[j]> arr[j+1])
            {
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("The array is now :");
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }


    
    return 0;

//performing binary search on the sorted array
int key =23;
int left=0;
int right=n-1;
int keyindex=-1;
//performing binary search on the sorted array
int itr=1;

while(left <= right){
    int mid = (left + right)/2;
//printing the mid index for each itteration
    if (arr[mid]< left ){
        left = mid + 1;
    

    }
}

}