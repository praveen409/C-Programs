


	#include<stdio.h>

	int main()	
	{
		int a[3][3] = {  1, 2, 3 , 
                                 4, 5, 6 , 
                                 7, 8, 9  };
		int b[3][3] = { {9,8,7},{6,5,4},{3,2,1} };

		int i, j, k=0, c[3][3], sum =0;

	printf("\nThe input matrix is :\n");
		for(i = 0; i < 3; i++)
		{
			for(j=0; j<3; j++)
			{
			printf(" %d ", a[i][j]);
			} 
		printf("\n");
		}
		
	printf("\nThe input matrix is :\n");
		for(i = 0; i < 3; i++)
		{
			for(j=0; j<3; j++)
			{
			printf(" %d ", b[i][j]);
			} 
		printf("\n");
		}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
			sum = sum + a[i][k] * b[k][j];
			c[i][j] = sum;
			}
		}

	}

	printf("\nThe Multiplication of Two matrix is :\n");

	
	for(i = 0; i < 3; i++)
		{
		for(j=0; j<3; j++)
			{
			printf(" %d ", c[i][j]);
			} 
		printf("\n");
		}

	printf("\n");

		return 0;
	}

	
