#include<stdio.h>
int main()
{	int a, b, choice;
	printf("\nenter the value for a : ");
	scanf("%d",&a);
	printf("\nenter the value for b : ");
	scanf("%d",&b);
	
	do
	{
		printf("\nchoose the arithmetic operation");
		printf("\n1. Addition");
		printf("\n2. Subtraction");
		printf("\n3. Multiplication");
		printf("\n4. Division");
		printf("\n5. Exit");
	
		printf("\nenter your choice : ");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
				printf("sum : %d",a+b);
				break;
			case 2:
				printf("difference : %d",a-b);
				break;
			case 3:
				printf("product : %d",a*b);
				break;
			case 4:
				printf("quotient : %d", a/b);
				break;
			case 5:
				break;
			default:
				printf("invalid choice");
		}
	}
	while (choice!=5);
	
	return 0;
}
