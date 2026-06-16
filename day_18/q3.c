// WAP TO BINARY SEARCH.
#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        // Prevent potential integer overflow compared to (low + high) / 2
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; 
        }
        
        // If target is greater, ignore left half
        if (arr[mid] < target) {
            low = mid + 1;
        } 
        // If target is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    // Element was not present in the array
    return -1;
}

int main() {
    // Array must be sorted for binary search to work
    int arr[20] , n;
    printf("Enter the size of array.\n");
    scanf("%d",&n);
    printf("Enter the elements of array.\n");
    for( int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the number to search: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}