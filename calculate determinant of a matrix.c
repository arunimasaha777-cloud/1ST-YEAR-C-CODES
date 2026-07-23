#include <stdio.h>

int main() {
    // Step 1: Start
    int a, b, c, d, e, f, g, h, i;
    int det;

    // Step 2: Read the 9 elements of the 3x3 matrix
    printf("Enter the 9 elements of the 3x3 matrix row-wise:\n");
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &d, &e, &f);
    scanf("%d %d %d", &g, &h, &i);

    // Steps 4, 5, 6: Calculate and store determinant
    det = a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);

    // Step 5: Print result (Step 7: Stop after printing)
    printf("Determinant of the matrix = %d\n", det);

    // Step 7: Stop
    return 0;
}
