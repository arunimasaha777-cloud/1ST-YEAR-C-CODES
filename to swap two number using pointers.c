#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *p, int *q) {
    int temp;
    temp = *p;  // store value pointed by p
    *p = *q;    // assign value pointed by q to p
    *q = temp;  // assign old value of p (stored in temp) to q
}

int main() {
    int a, b;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(ptr1, ptr2);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
