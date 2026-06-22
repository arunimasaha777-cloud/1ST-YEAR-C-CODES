#include<stdio.h>
int main(){
    int gnum=75; /*number assumed by the system */
    int unum;
    int attempts=0;
    printf("===GUESS THE NUMBER GAME===\n");
    printf("I have chosen a number between 1 to 100.\n");
    do{
        printf("Enter your guess:");
        scanf("%d",&unum);
        attempts++;
        if (unum<gnum){
            printf("Hint:The number is greater than %d\n", unum);
        }
        else if (unum>gnum){
            printf("Hint:The number is less than %d\n", unum);
        }
        else {
            printf("Congratulations! You have guessed the number correct.\n");
            printf("the correct number is %d\n", gnum);
            printf("You took %d attempts to guess the number\n", attempts);
            break;
        }
    }
    while (unum != gnum);
    return 0;
}