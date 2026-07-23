#include <stdio.h>

int main() {
    int n, i;
    
    // Step 1: Start
    // Step 2: Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Edge case: array must have at least one element
    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }
    
    int arr[n];
    
    // Read array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Step 3: Initialize max with first element
    int max = arr[0];
    
    // Step 4: Loop from index 1 to n-1 and update max if needed
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Step 5: Print the largest element
    printf("Largest element: %d\n", max);
    
    // Step 6: Stop
    return 0;
}
