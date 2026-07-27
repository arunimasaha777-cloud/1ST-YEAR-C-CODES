#include <stdio.h>

int main() {
    int arr[100], n, i, max;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Point to the first element
    ptr = arr;
    max = *ptr;  // assume first element is largest

    // Traverse the array using pointer arithmetic
    for (i = 1; i < n; i++) {
        ptr++;  // move to next element
        if (*ptr > max) {
            max = *ptr;
        }
    }

    printf("Largest element = %d\n", max);

    return 0;
}
