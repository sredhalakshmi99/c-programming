#include<stdio.h>
int main()
{
	int arr[100], i, limit, value, count=0;
	printf("Enter the limit : ");
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	{
	printf("Enter the array value for position %d : ",i);
	scanf("%d",&arr[i]);
	}
	printf("\narray =");
	for(i=0;i<limit;i++)
		printf("%d\t",arr[i]);
	printf("\nEnter the value for indexing : ");
	scanf("%d",&value);
	for(i=0;i<limit;i++)
	{
		if (arr[i]==value)
		{
			printf("\n Index of %d is %d \n",value,i);
			count++;
		}
		else
		{
			continue;
		}
	}
	
	if(count==0)
		printf("\n %d is not found\n",value);
	return 0;
}
