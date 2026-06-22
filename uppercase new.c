/* Check if the character is uppercase*/
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <='Z'){
        printf("%c is an uppercase letter \n");
    }
    else{
        printf("%c is not an uppercase letter\n");
    }
    return 0;
} 
