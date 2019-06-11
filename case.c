#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	char str[1000000];
	fgets(str,1000000,stdin);
	int index;
	if(islower(str[0]))
	str[0]=toupper(str[0]);
	
	for(index=1;str[index];index++)
	{
		if((str[index-1]==' ') && (islower(str[index])))
		str[index]=toupper(str[index]);
		else 
		{
			if((str[index-1]!=' ')&&(isupper(str[index])))
			str[index]=tolower(str[index]);
		}
		
	}
	printf("%s",str);
	return 0;
}
