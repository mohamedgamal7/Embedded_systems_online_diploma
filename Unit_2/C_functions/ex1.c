#include <stdio.h>
#include "string.h"
#include "math.h"

void getprime(int n1, int n2);

int main()
{
	int n1,n2;

	fflush(stdout);fflush(stdin);
	printf("Enter two numbers(intervals): ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&n1,&n2);
	getprime(n1,n2);

return 0 ;

}

void getprime(int n1, int n2)
{

	printf("Prime numbers between %d and %d are:" ,n1,n2);
	fflush(stdout);fflush(stdin);
	int j;
	for(int i=n1;i<=n2;i++)
	{
		if(i<=0||i==1)
			continue;
		for( j=2 ;j<sqrt(i);j++)
		{
			if(i%j==0)
				break;
		}
		if(i%j==0)
			continue;
		printf(" %d",i);


	}

}
