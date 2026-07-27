#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
    char *left, *right;
    int len = strlen(str);

    left = str;                     // point to first character
    right = str + len - 1;          // point to last character

    while (left < right) {
        if (*left != *right) {
            return 0;   // not a palindrome
        }
        left++;
        right--;
    }
    return 1;   // palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline from fgets if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}
