#include <stdio.h>

int main() {
    int n, i, j;

    // Step 1 & 2: Start and read size
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Size must be positive.\n");
        return 1;
    }

    int A[n][n];
    int rotated[n][n];

    // Step 3: Read matrix
    printf("Enter %d elements row-wise:\n", n * n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Step 4 & 5: Rotate 90° clockwise
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            rotated[j][n - 1 - i] = A[i][j];
        }
    }

    // Step 6: Print rotated matrix
    printf("\nRotated matrix (90° clockwise):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }

    // Step 7: Stop
    return 0;
}
