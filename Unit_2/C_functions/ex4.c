#include <stdio.h>
#include "string.h"
#include "math.h"

int calpow(int,int );

int main()
{
	int base,pow;

	fflush(stdout);fflush(stdin);
	printf("Enter base number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&base);

	fflush(stdout);fflush(stdin);
	printf("Enter power number(positive integer): ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&pow);

	printf("%d^%d = ",base,pow);
	fflush(stdout);fflush(stdin);

	printf("%d",calpow(base,pow));


return 0 ;

}

int calpow(int base,int pow ){

	if(pow>1)
	return base*calpow(base,pow-1);

}
