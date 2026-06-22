/*check if the number taken by the user is prime number.*/
#include<stdio.h>
int main(){
	int n, flag=0 ;
	printf("Enter a number:");
	scanf("%d", &n);
	if (n<=1) {
	flag=1;
	}
	for (int i=2;i<=n/2;i++)
	{ if (n%i==0)
	flag=1;
	break;
	}
	if (flag == 0){
	printf("the number is prime numebr\n");
	}
	else {
	printf("the number is not prime number\n");
	}
	return 0;
}

