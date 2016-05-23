


	#include<stdio.h>

	int main()	
	{
		int a[3][3] = {  1, 2, 3 , 
                                 4, 5, 6 , 
                                 7, 8, 9  };
		int b[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

		int i, j, k, C0 = 0,n=9, c[3][3];

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
		c[i][j] = a[i][j] + b[i][j];	
		}
	
	}


	printf("\nThe Sum of Two matrix is :\n");
	
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

	
