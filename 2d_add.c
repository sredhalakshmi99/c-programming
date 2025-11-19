#include<stdio.h>
int main()
{
	int arr[100][100], row, col, i, j;
	printf("enter the no. of rows : ");
	scanf("%d",&row);
	printf("enter the no. of columns : ");
	scanf("%d",&col);
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
			printf("enter the value for the index %d%d : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
