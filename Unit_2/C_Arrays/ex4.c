#include <stdio.h>

int main()
{
	// assuming a max a 10 elements
	int arr[20],N,index,element;

	printf("Enter the no. of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&N);

	for(int i=0 ; i<N ; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);

	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&index);

	// insert element depending on the location
	if(index<=N)
	{
		for(int i=N-1;i>index-2;i--)
		{
			arr[i+1]=arr[i];
		}
	}
	arr[index-1]=element;



	for(int i=0 ; i<N+1 ; i++)
	{
		printf("%d  ",arr[i]);
	}

return 0 ;

}
