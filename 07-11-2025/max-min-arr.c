//c program to find the largest and smallest value in an array
#include<stdio.h>
int main()
{
	int arr[100], limit, i, min_val, max_val;
	printf("Enter the limit : ");
	scanf("%d",&limit);
	for(i=0; i<limit; i++)
	{
		printf("Enter the array value for position %d :",i);
		scanf("%d",&arr[i]);
	}
	printf("Array = ");
	for(i=0; i<limit; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	min_val=arr[0];
	max_val=arr[0];
	for(i=0; i<limit; i++)
		{
			if(arr[i]<min_val)
			{
				min_val=arr[i];
			}
			if(arr[i]>max_val)
			{
				max_val=arr[i];
			}
			
		}
	printf("Smallest array value : %d",min_val);
	printf("\n");
	printf("Largest array value : %d",max_val);
	printf("\n");
	return 0;
	
		
}
