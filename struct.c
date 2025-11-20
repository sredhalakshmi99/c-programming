#include<stdio.h>
struct student
{
	int rollno;
	int age;
	char name[20];
};
int main()
{
	struct student var1;
	
	printf("\nEnter your name : ");
	fgets(var1.name,20,stdin);
	printf("Enter your roll no: ");
	scanf("%d",&var1.rollno);
	printf("Enter your age : ");
	scanf("%d",&var1.age);

	printf("\nName : %s",var1.name);
	printf("rollno : %d",var1.rollno);
	printf("\nage : %d\n",var1.age);
	return 0;
}
