#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    // Step 1 & 2: Start and read size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check for valid size
    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[n];

    // Step 5: Read elements and compute sum
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    // Step 6: Compute average
    average = sum / n;

    // Step 7: Print the average
    printf("Average of array elements: %.2f\n", average);

    // Step 8: Stop
    return 0;
}
