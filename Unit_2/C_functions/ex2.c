#include <stdio.h>
#include "string.h"
#include "math.h"

int factorial(int n);

int main()
{
	int n;

	fflush(stdout);fflush(stdin);
	printf("Enter a positive integer: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	printf("Factorial of %d = ",n);
	fflush(stdout);fflush(stdin);
	printf("%d",factorial(n));
	fflush(stdout);fflush(stdin);


return 0 ;

}

 int factorial(int n) {
    if (n!=1)
        return n*factorial(n-1);

}
