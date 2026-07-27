#include <stdio.h>

// Function to sort array using bubble sort with pointers
void sortArray(int *ptr, int n) {
    int i, j, temp;

    // Outer loop for passes
    for (i = 0; i < n - 1; i++) {
        // Inner loop for comparisons
        for (j = 0; j < n - 1 - i; j++) {
            // Compare adjacent elements using pointer arithmetic
            if (*(ptr + j) > *(ptr + j + 1)) {
                // Swap using temporary variable
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call sort function with pointer to first element
    sortArray(arr, n);

    printf("Sorted array in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));  // using pointer notation
    }
    printf("\n");

    return 0;
}
