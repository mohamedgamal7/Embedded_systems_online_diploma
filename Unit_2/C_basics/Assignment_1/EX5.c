/*
 * EX5.c
 *
 *  Created on: Dec 26, 2021
 *      Author: Mohamed_Gamal
 */

# include "stdio.h"

int main ()
{
	char character;
	printf("Enter a character: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&character);
	printf("ASCII value of %c: %d",character,character);
}

