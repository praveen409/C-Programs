









	#include<stdio.h>

	int main()	
	{
		int a[3][3] = {  {45, 67, 23} , 
                                 {12, 78, 43}, 
                                 {22, 66, 77} };
		int i, j, sum=0;


		for(i = 0; i < 3; i++)
		{
			for(j=0; j<3; j++)
			{
			sum = sum +a[i][j];
	
			}

			
		}
		printf("\nAdditiiion of all elements= %d",sum);


	printf("\n");
		return 0;
	}








	
	
