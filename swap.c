#include <stdio.h>

int main(void) {
	// your code goes here
	char str[100000000];
	scanf("%s",str);
	int index,len;
	
	for(len=0;str[len];len++);
	for(index=0;index<len-1;index=index+2)
	{
		char temp=str[index];
		str[index]=str[index+1];
		str[index+1]=temp;
	}
	printf("%s",str);
	return 0;
}
