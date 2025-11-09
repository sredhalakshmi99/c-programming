//Addition of two array
#include<stdio.h>
int main()
{
	int limit, arr_1[100], arr_2[100], new_arr[100], i;	//variable declaration
	
	printf("Enter the limit for the arrays :  ");	
	scanf("%d",&limit);
	
	printf("\nValues for first array : ");		 //first array
	for(i=0; i<limit; i++)			 
	{
		printf("\nEnter the array values for the position %d : ",i);
		scanf("%d",&arr_1[i]);
	}
	
	printf("\nValues for second array : ");		//second array
	for(i=0; i<limit; i++)		
	{
		printf("\nEnter the array values for the position %d : ",i);
		scanf("%d",&arr_2[i]);
	}
	
	printf("\nFirst array :\t");		//printing first array
	for(i=0; i<limit; i++)
		printf("\t%d",arr_1[i]);
	
	printf("\nSecond array :\t");		//printing second array
	for(i=0; i<limit; i++)
		printf("\t%d",arr_2[i]);
	
	for(i=0;i<limit;i++)		//addition of two arrays
	{
		new_arr[i]=arr_1[i]+arr_2[i];
	}
	printf("\n");
	printf("New array : ");
	
	for(i=0;i<limit;i++)		//printing new array
		printf("\t%d",new_arr[i]);	
	printf("\n");
	return 0;
}

