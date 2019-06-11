#include <stdio.h>

int main(void) {
	// your code goes here
	char str1[100000],str2[100000];
	int index,count=0;
	scanf("%s %s",str1,str2);
	for(index=0;str1[index] && str2[index];index++)
	{
		if(str1[index]!=str2[index])
		count++;
	}
	if(count==1)
	printf("yes");
	else
	printf("no");
	return 0;
}
