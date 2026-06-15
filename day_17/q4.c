// WAP IN C TO FIND COMMON ELEMENTS. 
#include <stdio.h>

int main() {
    int n1, n2;

    // Input size and elements for the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements for the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Array to store common elements and prevent printing duplicates
    int common[n1 < n2 ? n1 : n2]; 
    int k = 0; // Counter for the common elements array

    printf("\nCommon elements are: ");
    
    // Logic to find common elements
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if this element was already added to the common array
                int isDuplicate = 0;
                for (int x = 0; x < k; x++) {
                    if (common[x] == arr1[i]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                
                // If it's a new common element, store it and print it
                if (!isDuplicate) {
                    common[k] = arr1[i];
                    printf("%d ", common[k]);
                    k++;
                }
                break; // Move to the next element in arr1 since a match was found
            }
        }
    }

    // If no common elements were found
    if (k == 0) {
        printf("None");
    }
    
    printf("\n");
    return 0;
}