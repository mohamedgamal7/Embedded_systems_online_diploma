#include <stdio.h>
#include "string.h"

int main()
{

	int  len=0;
	char string[100];

	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(string);

	for(int i=0;string[i]!=0;i++)
	{
		len++;
	}

	printf("Length of string : %d",len);
	fflush(stdout);fflush(stdin);

return 0 ;

}
