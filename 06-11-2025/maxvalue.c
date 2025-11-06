#include<stdio.h>
#define x 100
int main()
{
	int arr[x],limit,num,val,i;
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=0;i<limit;i++)	
	{
		printf("enter the array elements at %d:",i);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<limit;i++)
	{
		printf("%d\t",arr[i]);
	}
	val=arr[0];
	for (i=0;i<limit;i++)
	{
		if (val<arr[i])
			val=arr[i];
	}
	printf("\nmax value in array is %d",val);
	printf("\n");
	return 0;
	
		
		
	
}
