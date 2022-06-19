#include <stdio.h>

int main()
{
	// assuming a max a 10 elements
	int arr[10],N,index,element;

	printf("Enter the no. of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&N);

	for(int i=0 ; i<N ; i++)
	{
		scanf(" %d",&arr[i]);
	}

	printf("Enter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);


	for(int i=0;i<N;i++)
	{
		if(arr[i]==element){index=i;break;}
	}


	printf("Element found at location : %d",index+1);
	fflush(stdin);fflush(stdout);

return 0 ;

}
