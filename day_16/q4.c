// WAP TO REMOVE DUPLICATES FROM ARRAY.
#include <stdio.h>

int main() {
    int arr[100];
    int size;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Read array elements from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Logic to remove duplicate elements
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // If a duplicate element is found
            if (arr[i] == arr[j]) {
                // Shift all subsequent elements to the left by one position
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                
                // Reduce the logical size of the array
                size--;
                
                // Decrement j to re-check the element that shifted into this position
                j--;
            }
        }
    }

    // Print the unique array elements
    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}