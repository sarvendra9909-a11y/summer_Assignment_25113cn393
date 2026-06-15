// WAP IN C TO UNION OF ARRAY.
#include <stdio.h>
// Function to check if an element is already present in the array
int isDuplicate(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1; // Found a duplicate
        }
    }
    return 0; // Unique element
}

int main() {
    int arr1[] = {1, 2, 4, 5, 2, 1};
    int arr2[] = {2, 3, 5, 6, 6};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // The maximum possible size of the union array is the sum of both sizes
    int unionArr[size1 + size2];
    int k = 0; // Tracker for the union array size

    // Step 1: Copy unique elements from the first array
    for (int i = 0; i < size1; i++) {
        if (!isDuplicate(unionArr, k, arr1[i])) {
            unionArr[k++] = arr1[i];
        }
    }

    // Step 2: Copy unique elements from the second array
    for (int i = 0; i < size2; i++) {
        if (!isDuplicate(unionArr, k, arr2[i])) {
            unionArr[k++] = arr2[i];
        }
    }

    // Step 3: Print the final union array
    printf("Union of the two arrays is: \n");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}