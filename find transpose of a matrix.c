#include <stdio.h>

int main() {
    int r, c, i, j;

    // Step 1 & 2: Start and read dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Check for valid dimensions
    if (r <= 0 || c <= 0) {
        printf("Rows and columns must be positive.\n");
        return 1;
    }

    int matrix[r][c];
    int transpose[c][r];  // Step 3: create transpose matrix

    // Read matrix elements
    printf("Enter matrix elements row-wise:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 4 & 5: Compute transpose
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Step 6: Print transpose
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    // Step 7: Stop
    return 0;
}
