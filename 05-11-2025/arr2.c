#include<stdio.h>
int main()
{
	int a[100];
	int i;
	int sum=0;
	for (i=0;i<=4;i++)
	{
		printf("enter the element at %d :",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<=4;i++)
	{
		printf("%d \t",a[i]);
	}
	for (i=0;i<=4;i++)
	{
		sum+=a[i];
	}
	printf("\nsum of array elements : %d",sum);
	return 0;
}

