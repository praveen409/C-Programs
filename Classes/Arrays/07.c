



	#include<stdio.h>

	int main()	
	{
		int a[3][3] = {  45, 67, 23 , 
                                 12, 78, 43 , 
                                 22, 66, 77  };
		int i, j;


		for(i = 0; i < 3; i++)
		{
			for(j=0; j<3; j++)
			{

				if(i == j)
				{
					printf("%d ", a[i][j]);
				}
				else
				{
					printf("   ");
				}
			}
			printf("\n");
			
		}

		return 0;
	}









	
