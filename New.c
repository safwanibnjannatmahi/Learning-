#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There is no second smallest element.\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize smallest and second smallest
    int smallest = arr[0];
    int secondSmallest = arr[1];

    if (secondSmallest < smallest) {
        int temp = smallest;
        smallest = secondSmallest;
        secondSmallest = temp;
    }

    // Single pass to find second smallest
    for (int i = 2; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    if (smallest == secondSmallest)
        printf("There is no second smallest element.\n");
    else
        printf("Second smallest element = %d\n", secondSmallest);

    return 0;
}
