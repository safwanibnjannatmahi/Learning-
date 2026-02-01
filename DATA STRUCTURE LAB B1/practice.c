/*#include <stdio.h>
int main() {
    int arr[100],n,i,j,search_num,found;

    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the array eliments size is %d: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    found=0;
    int new_possition=0;
    printf("Which element you want to search?:");
    scanf("%d",&search_num);
    for(i=0;i<n;i++){
        if (arr[i]==search_num){
            found=1;
            new_possition = i;
            break;
        }
    }

    if (found=1){
        printf("The eliment is found in %d new_possition on the arry", new_possition +1);
    }
    else{
        printf("Element not found!");
    }

    return 0;
} */
//-------------------------booble sorting--------------------------------------
 #include <stdio.h>
 int main(){
    int arr[100],n,i,j,temp;

    printf("Enter the array size:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

// now we will do ascending order sorting of the array elements to apply the binary search.
    for (i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("After sorting:");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
} 

//code for delete any elements from string or array-------------------------------------------------------------------------------------
/*#include <stdio.h>
#include <string.h>

 int main() {
    char students[7][20] = {"Asha", "Bithi", "Fahim", "Hasan", "Joya", "Karim", "Lima"};
    int n = 7;
    int i;
    int j,pos;
    char target[] = "Hasan";

    for (i=0;i<n;i++){
        if (strcmp(students[i],target)==0){
            pos=i;
            break;
        }
    }
    
        for (j=pos;j<n-1;j++){
            strcpy(students[j],students[j+1]);
        }
        n--;
    

    for(i=0;i<n;i++){
        printf("%s\n",students[i]);
    }

    return 0;
}*/
 
// array for number deletion---------------
  /* #include <stdio.h>
 int main(){
    int arr[100],i,j,pos=-1,target;

    printf("Enter the size of the array:");
    int n;
    scanf("%d",&n);

    printf("Enter the elements now:");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the deletable eliment:");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if (arr[i]==target){
            pos=i;
            break;
        }
    }
    
        for (j=pos;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        n--;
        printf("Array after deletion: ");
        for (j=0;j<n;j++){
            printf("%d ",arr[j]);
        }
     

    return 0;
 }  */


 //code is for insert any elements in any new_possition---------------------------------------------------------------------
 /* #include <stdio.h>
 int main(){
    int arr[100]={1,2,3,4,5,6,7,8,9};
    int i,change,new_poss;
    int n=9;

    printf("Old Array:");
    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");

    printf("whitch number would you want to insert:");
    scanf("%d %d",&change,&new_poss);

    for (i=n;i>new_poss;i--){
        arr[i] = arr[i-1];
    }

    arr[new_poss]=change;
    n++;

    printf("New Array:");
    for (i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
 }
 */
//----------------------------------------------binary search--------------------------------------------------------
/*  #include <stdio.h>
 int main(){
    int arr[50],i,n,min,max,mid,search,found=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element search;");
    scanf("%d",&search);

    min=0;
    max=n-1;
    mid=(min+max)/2;
    while (min<=max){
        if (arr[mid]==search){
            printf("Element found");
            found=1;
            break;
        }
        else if (arr[mid]<search){
            min=mid+1;
        }
        else{
            max=mid-1;
        }
        mid=(min+max)/2;
    }
    if (found==0){
        printf("Element not found");
    }
    return 0;
 } */
 

 