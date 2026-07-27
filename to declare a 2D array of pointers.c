#include <stdio.h>
#include <stdlib.h>   // for malloc and free

#define ROWS 3
#define COLS 4

int main() {
    // Declare a 2D array of integer pointers
    int *ptrArr[ROWS][COLS];
    int i, j, value = 0;

    // Step 1: Allocate memory and assign values
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            ptrArr[i][j] = (int*)malloc(sizeof(int));
            if (ptrArr[i][j] == NULL) {
                printf("Memory allocation failed!\n");
                return 1;
            }
            *ptrArr[i][j] = value++;
        }
    }

    // Step 2: Print the values
    printf("2D Array of Pointers (values):\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", *ptrArr[i][j]);
        }
        printf("\n");
    }

    // Step 3: Free the allocated memory
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            free(ptrArr[i][j]);
        }
    }

    return 0;
}
