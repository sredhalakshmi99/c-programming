#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[100][100], B[100][100], C[100][100], row_1, col_1,row_2, col_2, i, j;
	printf("enter the no. of rows 1: ");
	scanf("%d",&row_1);
	printf("enter the no. of columns 1: ");
	scanf("%d",&col_1);
	printf("enter the no. of rows 2: ");
	scanf("%d",&row_2);
	printf("enter the no. of columns 2: ");
	scanf("%d",&col_2);
	//printf("For matrix A : \n");
	if (row_1!=row_2 && col_1 !=col_2)
	{
		printf("rows and column mismatched...!!!\n");
		exit (-1);
	}
	for (i=0; i<row_1; i++)
	{
		for (j=0; j<col_1; j++)
		{
			printf("enter the value for the index %d%d : ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("For matrix B : \n");
	for (i=0; i<row_2; i++)
	{
		for (j=0; j<col_2; j++)
		{
			printf("enter the value for the index %d%d : ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	printf("A=\n");
	for (i=0; i<row_1; i++)
	{
		for (j=0; j<col_1; j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("B=\n");
	for (i=0; i<row_1; i++)
	{
		for (j=0; j<col_1; j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	printf("C=\n");
	for (i=0; i<row_1; i++)
	{
		for (j=0; j<col_1; j++)
		{
			C[i][j] = A[i][j]+B[i][j] ;
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
