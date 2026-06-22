/*take a number from the user and check if it is multiple of both 3 and 7*/
#include <stdio.h>
int main (){
	int num;
	printf ("Enter a number:");
	scanf("%d", &num);
	if (num %3 ==0 && num%7==0){
		printf("The number is a multiple of both 3 and 7.");
	}
	else{
		printf("The number is not a multiple of both 3 and 7.");
	}
	return 0;
}

