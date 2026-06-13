// WAP TO FIND MAXIMUM FREQUENCY ELEMENT.
#include <stdio.h>

int main() {
    int n , arr[20];
    printf("Enter the size of array");
    scanf("%d",&n);
    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_element = arr[0];
    int max_count = 0;

    // Logic to find the maximum frequency element
    for (int i = 0; i < n; i++) {
        int current_count = 0;

        // Count occurrences of the current element arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                current_count++;
            }
        }

        // Update maximum frequent element if a higher frequency is found
        if (current_count > max_count) {
            max_count = current_count;
            max_element = arr[i];
        }
    }

    // Output the final result
    printf("\nElement with maximum frequency: %d\n", max_element);
    printf("It appears %d times.\n", max_count);

    return 0;
}