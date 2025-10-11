#include <stdio.h>

int main() {
    int n, i, search , flag = 0;

    // Taking size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // declaring array of size n

    // Taking array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking element to search
    printf("Enter the element to search: ");
    scanf("%d", &search);

    // Performing Linear Search
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element found at position %d and its index nnumber is %d \n", i + 1,i);
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}