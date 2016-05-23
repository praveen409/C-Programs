


	#include<stdio.h>

	int main()	
	{
		int a[3][3] = {  4, 7, 3 , 
                                 2, 8, 3 , 
                                 2, 6, 7  };
		int i, j, k, R0 = 0;
		printf("\nThe input matrix is :\n");
		for(i = 0; i < 3; i++)
		{
			for(j=0; j<3; j++)
			{
			printf(" %d ", a[i][j]);
			} 
		printf("\n");
		}

		for(i = 0,k=2; i < 1,k < 3; i++,k++)
			{
			for(j = 0; j < 3; j++)
				{
				R0 = a[i][j];
				a[i][j] = a[k][j];
				a[k][j] = R0;
				}
			}
	printf("\nAfter the Exchanging the matrix is :\n");
	
	for(i = 0; i < 3; i++)
		{
		for(j=0; j<3; j++)
			{
			printf(" %d ", a[i][j]);
			} 
		printf("\n");
		}
	
	printf("\n");

		return 0;
	}

	
