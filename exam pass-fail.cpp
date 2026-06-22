/*check pass or fail in exam (assume 40 as passing marks)*/
#include <stdio.h>
 int main(){
 	int marks;
 	printf("Enter your marks:");
 	scanf ("%d", &marks);
 	if (marks>=40)
 		printf("you passed!\n");
	else 
	printf("you failed!\n");
	return 0;
 }
