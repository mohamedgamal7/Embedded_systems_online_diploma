/*
 * EX4.c
 *
 *  Created on: Dec 26, 2021
 *      Author: Mohamed_Gamal
 */

# include "stdio.h"

int main ()
{
	float number1 ,number2;
	printf("Enter two numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f\n%f",&number1,&number2);
	printf("Product: %f",number1*number2);
}

