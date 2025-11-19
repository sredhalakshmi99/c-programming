#include<stdio.h>
int main()
{
	int a, b, c, sum, average;
	printf("Enter the value for a : ");
	scanf("%d",&a);
	printf("\nEnter the value for b : ");
	scanf("%d",&b);
	printf("\nEnter the value for c : ");
	scanf("%d",&c);
	sum=a+b+c;
	average=sum/3;
	printf("\n Sum is %d",sum);
	printf("\n Average is %d",average);
	return 0;
}
