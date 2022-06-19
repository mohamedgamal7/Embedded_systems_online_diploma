#include <stdio.h>

int main()
{
 int N;
 float sum = 0;
 float arr[100]; // assuming the Number of elements won't exceed a 100

 printf("Enter the number of data elements : ");
 fflush(stdout);fflush(stdin);
 scanf("%d",&N);

 while(N>100)
 {
	 printf("please enter a number less than or equal a 100 \n");
	 printf("Enter the number of data elements : ");
	 fflush(stdout);fflush(stdin);
	 scanf("%d",&N);

 }

 for(int i=0;i<N;i++)
 {
	 printf("Enter a number : ");
	 fflush(stdout);fflush(stdin);
	 scanf("%f",&arr[i]);
	 sum+=arr[i];
 }


 printf("Average = %f",sum/N);
 fflush(stdout);fflush(stdin);



return 0 ;
}
