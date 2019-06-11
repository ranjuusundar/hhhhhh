#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	char str[100000];
	scanf("%s",str);
	int len=strlen(str);
	int index;
	for(index=len-1;index>=0;index--)
	printf("%c",str[index]);
	return 0;
}
