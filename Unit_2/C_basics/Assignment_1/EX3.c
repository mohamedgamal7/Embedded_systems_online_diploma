/*
 * EX1.c
 *
 *  Created on: Dec 26, 2021
 *      Author: Mohamed_Gamal
 */
# include "stdio.h"

int main ()
{
	int number1 ,number2;
	printf("Enter two integers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d\n%d",&number1,&number2);
	printf("Sum: %d",number1+number2);
}
