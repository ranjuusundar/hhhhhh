#include <stdio.h>
 
int main(void) {
	// your code goes here
	int num;
	scanf("%d",&num);
	if(num<0)
	printf("invalid");
	else if((num&1)==1)
	printf("Odd");
	else
	printf("Even");
	return 0;
}
