#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5},i;
	arr[2]=10;
	printf("%d\n",arr[2]);
	printf("%ld\n",sizeof(arr));
	for(i=0;i<=4;i++)
		printf("%d\n",arr[i]);
	return 0;
	
}
