// WAP TO SORT ARRAY IN DESCENDING ORDER.
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j, temp;

    // Ask user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Accept array elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Logic for sorting array in descending order
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            // Change '<' to '>' if you want ascending order
            if (arr[i] < arr[j]) { 
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display the sorted array
    printf("\nArray sorted in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
