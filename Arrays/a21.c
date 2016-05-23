


	#include<stdio.h>

	int main()	
	{
		int a[3][3] = {  4, 7, 3 , 
                                 2, 8, 3 , 
                                 2, 6, 7  };
		int i, j, C0 = 0, C1=0, C2=0;

		for(i = 0; i < 3; i++)
		{
			for(j=0; j<3; j++)
			{
			printf(" %d ", a[i][j]);
			} 
		printf("\n");
		}

		for(i = 0; i < 3; i++)
		{
			for(j=0; j<1; j++)
			{
				{
				C0 = C0 + a[i][j];	
				}
			}	
		}

		for(i = 0; i < 3; i++)
		{
			for(j=1; j<2; j++)
			{
				
				{
				C1 = C1 + a[i][j];	
				}
			}

			
		}

		for(i = 0; i < 3; i++)
		{
			for(j=2; j<3; j++)
			{
				
				{
				C2 = C2 + a[i][j];	
				}
			}

			
		}

		printf("\nC0 Sum = %d ", C0);

		printf("\nC1 Sum = %d ", C1);

		printf("\nC2 Sum = %d ", C2);

	printf("\n");

		return 0;
	}









	
