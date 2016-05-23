





	#include<stdio.h>

	int main()
	{
		int number, i, count = 0;


		
		for (number =1; number <=10; number++)
		{

			for(i = 1; i <= number; i++)
			{
				if( number % i == 0 )
				{
				//	printf("%d ", i);
					count = count + 1;
				}
				
				{
				if(count < 3)
				printf("%d is prime number....\n", number);
				else
				printf("%d is not prime number....\n", number);
				}
			}	

		}
		printf("\n");


		

		return 0;
	}
