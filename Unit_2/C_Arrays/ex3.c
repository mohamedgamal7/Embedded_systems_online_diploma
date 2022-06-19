#include <stdio.h>

int main()
{
	int rows,cols;
	// assuming the maximum matrix input is a 10*10 matrix
	float matrix[10][10];
	float transpose[10][10];

	//getting the number of rows and columns from the user
	printf("Enter the number of rows and columns of a matrix respectively: ");
	fflush(stdout);fflush(stdin);
	scanf("%d\n%d",&rows,&cols);

	// getting the matrix itself from the user
	printf("Enter elements of the matrix : \n");
	fflush(stdout);fflush(stdin);
	for(int i=0;i<rows;i++)
	{
		for(int j = 0 ; j <cols ; j++)
		{
			printf("Enter element a%d%d : ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&matrix[i][j]);
		}
	}

	// Printing the matrix entered by the user
	printf("Entered matrix: \n");
	fflush(stdout);fflush(stdin);
	for(int i=0;i<rows;i++)
	{
		for(int j = 0 ; j <cols ; j++)
		{
			printf("%f  ",matrix[i][j]);
			fflush(stdout);fflush(stdin);

		}
		printf("\n");
	}

	//Transposing the matrix
	for(int i=0;i<rows;i++)
	{
		for(int j = 0 ; j <cols ; j++)
		{
			transpose[j][i] = matrix[i][j];
		}

	}



	// Printing the transposed matrix

	printf("Transposed matrix: \n");
	fflush(stdout);fflush(stdin);
	for(int i=0;i<cols;i++)
	{
		for(int j=0 ; j<rows ; j++)
		{
			printf("%f  ",transpose[i][j]);
			fflush(stdout);fflush(stdin);

		}
		printf("\n");
	}

return 0 ;

}
