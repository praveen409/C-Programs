


	#include<stdio.h>

	int main()	
	{
		int a[3][3] = {  4, 7, 3 , 
                                 2, 8, 3 , 
                                 2, 6, 7  };
		int i, j, R0 = 0, R1=0, R2=0;

		for(i = 0; i < 3; i++)
		{
			for(j=0; j<3; j++)
			{
			printf(" %d ", a[i][j]);
			} 
		printf("\n");
		}

		for(i = 0; i < 1; i++)
		{
			for(j=0; j<3; j++)
			{
				{
				R0 = R0 + a[i][j];	
				}
			}	
		}

		for(i = 1; i < 2; i++)
		{
			for(j=0; j<3; j++)
			{
				
				{
				R1 = R1 + a[i][j];	
				}
			}

			
		}

		for(i = 2; i < 3; i++)
		{
			for(j=0; j<3; j++)
			{
				
				{
				R2 = R2 + a[i][j];	
				}
			}

			
		}

		printf("\nR0 Sum = %d ", R0);

		printf("\nR1 Sum = %d ", R1);

		printf("\nR2 Sum = %d ", R2);

	printf("\n");

		return 0;
	}









	
