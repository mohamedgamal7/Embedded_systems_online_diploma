#include <stdio.h>
#include "string.h"
#include "math.h"

void reverse(char str[],int size);

int main()
{
	char str[100];

	fflush(stdout);fflush(stdin);
	printf("Enter a sentence: ");
	fflush(stdout);fflush(stdin);
	gets(str);
	int size= strlen(str);
	reverse(str,size);



return 0 ;

}

void reverse(char str[],int size){

	if(size>0)
	{
		printf("%c",str[size-1]);
		size--;
		reverse(str,size);
	}

}
