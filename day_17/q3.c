// WAP IN C TO INTERSECTION OF ARRAY.
#include <stdio.h>

// Function to find the intersection of two arrays
void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    printf("Intersection of the two arrays: ");
    int foundAny = 0;

    // Loop through each element of the first array
    for (int i = 0; i < size1; i++) {
        // Check if the current element is a duplicate within the first array
        int isDuplicate = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                isDuplicate = 1;
                break;
            }
        }
        
        // Skip processing if this element was already checked
        if (isDuplicate) {
            continue;
        }

        // Check if the unique element exists in the second array
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                foundAny = 1;
                break; // Move to the next element in arr1
            }
        }
    }

    if (!foundAny) {
        printf("No common elements found.");
    }
    printf("\n");
}

int main() {
    int size1, size2;

    // Input size and elements of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Call function to find intersection
    findIntersection(arr1, size1, arr2, size2);

    return 0;
}