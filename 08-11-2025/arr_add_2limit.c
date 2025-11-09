//Addition of two array
//when two limits are read
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int limit_1, limit_2, arr_1[100], arr_2[100], new_arr[100], i;	//variable declaration
	
	printf("Enter the limit_1 for the arrays :  ");			
	scanf("%d",&limit_1);
	printf("Enter the limit_2 for the arrays :  ");			
	scanf("%d",&limit_2);
	if(limit_1 != limit_2)
	{
		printf("limits mismatched...!\nEnter same value for limits\n");
		exit(-1);
	}
	printf("\nValues for first array : ");		//first array		 
	for(i=0; i<limit_1; i++)			 
	{
		printf("\nEnter the array values for the position %d : ",i);
		scanf("%d",&arr_1[i]);
	}

	printf("\nValues for second array : ");		//second array
	for(i=0; i<limit_2; i++)		
	{
		printf("\nEnter the array values for the position %d : ",i);
		scanf("%d",&arr_2[i]);
	}
	
	printf("\nFirst array :\t");		//printing first array
	for(i=0; i<limit_1; i++)
		printf("\t%d",arr_1[i]);
	
	printf("\nSecond array :\t");		//printing second array
	for(i=0; i<limit_2; i++)
		printf("\t%d",arr_2[i]);
	
	for(i=0;i<limit_1;i++)		//addition of two arrays
	{
		new_arr[i]=arr_1[i]+arr_2[i];
	}
	printf("\n");
	printf("New array : ");
	
	for(i=0;i<limit_1;i++)		//printing new array
		printf("\t%d",new_arr[i]);	
	printf("\n");
	return 0;
}

