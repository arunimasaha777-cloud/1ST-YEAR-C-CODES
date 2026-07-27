#include <stdio.h>
#include <stdbool.h>   // for bool type

// Function to check if a number is prime
bool isPrime(int n) {
    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        return false;
    }
    
    // Check for divisors from 2 to sqrt(n)
    // Using i*i <= n avoids floating-point sqrt and is efficient
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;   // found a divisor → not prime
        }
    }
    return true;   // no divisors found → prime
}

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
