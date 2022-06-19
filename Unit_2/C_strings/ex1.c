#include <stdio.h>
#include "string.h"

int main()
{
	char target;
	int  freq=0;
	char string[100];

	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(string);

	printf("Enter a character to find frequency: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&target);

	for(int i=0;i<strlen(string);i++)
	{
		if(string[i]==target){freq++;}
	}

	printf("Frequency of %c = %d",target,freq);
	fflush(stdout);fflush(stdin);

return 0 ;

}
