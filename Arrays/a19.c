









	#include<stdio.h>

	int main()	
	{
		int a[3][3] = {  4, 7, 3 , 
                                 2, 8, 3 , 
                                 2, 6, 7  };
		int i, j, sum = 0;


		for(i = 0; i < 3; i++)
		{
			for(j=0; j<3; j++)
			{

				if(i == j)
				{
				sum = sum + a[i][j];	
				}
			}

			
		}
		printf(" %d is the sum of Diagnal no's.", sum);

	printf("\n");

		return 0;
	}









	
