


	#include<stdio.h>

	int main()	
	{
		int a[3][3] = {  1, 2, 3 , 
                                 4, 5, 6 , 
                                 7, 8, 9  };
		int b[3][3] = { {9,8,7},{6,5,4},{3,2,1} };

		int i, j, temp, c[3][3];

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
			temp = a[i][j];
			a[i][j] = b[i][j];
			b[i][j] = temp;
		}

	}

	printf("\nAfter Interchanging the Two matrix is :\n");

	printf("A Matrix ==>\n");
	for(i = 0; i < 3; i++)
		{
		for(j=0; j<3; j++)
			{
			printf(" %d ", a[i][j]);
			} 
		printf("\n");
		}

	printf("B Matrix ==>\n");
	for(i = 0; i < 3; i++)
		{
		for(j=0; j<3; j++)
			{
			printf(" %d ", b[i][j]);
			} 
		printf("\n");
		}
	printf("\n");

		return 0;
	}

	
