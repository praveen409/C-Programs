


	#include<stdio.h>

	int main()	
	{
		int a[3][3] = {  4, 7, 3 , 
                                 2, 8, 3 , 
                                 2, 6, 7  };
		int i, j, k, C0 = 0;
		printf("\nThe input matrix is :\n");
		for(i = 0; i < 3; i++)
		{
			for(j=0; j<3; j++)
			{
			printf(" %d ", a[i][j]);
			} 
		printf("\n");
		}

		for(j = 0,k=1; j < 1,k < 2; j++,k++)
			{
			for(i = 0; i < 3; i++)
				{
				C0 = a[i][j];
				a[i][j] = a[i][k];
				a[i][k] = C0;
				}
			}
	printf("\nAfter the Exchanging Columns 1 & 2 the matrix is :\n");
	
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

	
