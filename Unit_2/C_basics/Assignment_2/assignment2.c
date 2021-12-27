/*
 * assignment2.c
 *
 *  Created on: Dec 26, 2021
 *      Author: Mohamed_Gamal
 */

# include "stdio.h"


void ex1(){

	int number;

	printf("Enter an integer you want to check: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&number);

	if (number%2==0)
		printf("%d is even",number);
	else
		printf("%d is odd",number);
}

void ex2(){

	char alphabet;
	printf("Enter an alphabet: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&alphabet);

	char vowels[] = {'a','o','e','i','u'};

	int i  ;
	for(i = 0 ;i<5 ; i++)
	{
		// check if the alphabet is small or capital vowel
		if (alphabet == vowels[i] || alphabet == vowels[i]-32)

			{
			  printf("%c is a vowel.",alphabet);
			  break;
			}

	}
	if(i==5){
		 printf("%c is a consonant.",alphabet);
	}
}


void ex3(){

	float number1,number2,number3;

	printf("Enter three numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f%f%f",&number1,&number2,&number3);

	if (number1>number2){
		if (number3>number1)
			printf("Largest number = %f",number3);
		else
			printf("Largest number = %f",number1); }
	else {
		if (number3>number2)
			printf("Largest number = %f",number3);
		else
			printf("Largest number = %f",number2);}
}

void ex4(){

	float number;

	printf("Enter a number: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&number);

	if (number == 0)
		printf("You entered zero");
	else if (number>0)
		printf("%f is positive",number);
	else
		printf("%f is negative",number);

}

void ex5(){

	char entry;

	printf("Enter a character: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&entry);

	if ((entry>=65 && entry<=90) || (entry>=97 && entry<=122))
	printf("%c is an alphabet",entry);

	else
	printf("%c is not an alphabet",entry);

}

void ex6(){

	int entry;
	int sum = 0;

	printf("Enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&entry);

	// easy solution using Gauss's formula
    //printf("Sum = %d",(entry*(entry+1)/2));
	int i;
	for (i =1 ; i<=entry ; i++){
		sum+=i;
	}

	printf("Sum = %d",sum);
}


void ex7(){

	int entry;
	int factorial = 1;

	printf("Enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&entry);


	if (entry>0){
		int i;
		for (i =1 ; i<=entry ; i++){
			factorial*=i;
		}
		printf("Factorial = %d",factorial);}
	else
		printf("Error!!! Factorial of negative number doesn't exist");
}

void ex8(){

	char operand;
	float number1,number2;

	printf("Enter operator either + or - or * or divide : ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&operand);


	printf("Enter two operands: ");
	fflush(stdout); fflush(stdin);
	scanf("%f%f",&number1,&number2);

	switch(operand){
		case '+':
		{printf("%f + %f = %f",number1,number2,number1+number2);
		}break;
		case '-':
		{printf("%f - %f = %f",number1,number2,number1-number2);
		}break;
		case '*':
		{printf("%f * %f = %f",number1,number2,number1*number2);
		}break;
		case '/':
		{printf("%f / %f = %f",number1,number2,number1/number2);
		}break;
	}
}


int main ()
{

	int ex_num;
	printf("Please enter the exercise number for assignment 2: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&ex_num);

	switch(ex_num){
	case 1:
	{ex1();
	}break;
	case 2:
	{ex2();
	}break;
	case 3:
	{ex3();
	}break;
	case 4:
	{ex4();
	}break;
	case 5:
	{ex5();
	}break;
	case 6:
	{ex6();
	}break;
	case 7:
	{ex7();
	}break;
	case 8:
	{ex8();
	}break;
	default :
	{printf("correct exercise numbers are from 1 to 8");
	}break;


	}
}

