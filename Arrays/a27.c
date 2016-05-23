

	#include<stdio.h>
	int b[3][3];
	int main()
	{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
	float det=0;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" %d ",a[i][j]);
		}
	printf("\n");
	}

	for(j=0;j<3;j++)
	{
	printf("\n");
		for(i=0;i<3;i++)
		{
		b[i][j]=a[i][j];
		
		}
	}
	printf("\nThe tranfered matrix is : \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" %d ",b[j][i]);
		}
	printf("\n");
	}

	printf("\n");
	return 0;
	}
