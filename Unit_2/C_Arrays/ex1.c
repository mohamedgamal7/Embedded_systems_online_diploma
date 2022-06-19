#include <stdio.h>
# define rowsize 2
# define colsize 2

int main ()
{
	float matrix_1[2][2];
	float matrix_2[2][2];

	printf("Enter the elements of the first matrix \n");
	for(int i=0;i<rowsize;i++)
	{
		for(int j=0;j<colsize;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&matrix_1[i][j]);
		}
	}

	printf("Enter the elements of the second matrix \n");
	for(int i=0;i<rowsize;i++)
	{
		for(int j=0;j<colsize;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&matrix_2[i][j]);
		}
	}

	printf("Sum of Matrices:\n");
	for(int i=0;i<rowsize;i++)
	{
		for(int j=0;j<colsize;j++)
		{
			matrix_2[i][j] = matrix_1[i][j] + matrix_2[i][j] ;
			printf("%f  ",matrix_2[i][j]);
			fflush(stdout);fflush(stdin);
		}
		printf("\n");
	}



	return 0 ;
	}
