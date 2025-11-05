#include<stdio.h>
int main()
{
	int a[100];
	int i;
	int sum=0,limit;
	printf("enter the limit :");
	scanf("%d",&limit);
	for (i=0;i<limit;i++)
	{
		printf("enter the element at %d :",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<limit;i++)
	{
		printf("%d \t",a[i]);
	}
	for (i=0;i<limit;i++)
	{
		sum+=a[i];
	}
	printf("\nsum of array elements : %d",sum);
	printf("\n Average: %f",(float)sum/limit);
	return 0;
}

