





	#include<stdio.h>

	int main()
	{
		int number, i, count = 0;


		printf("Enter the number : ");
		scanf("%d", &number);


		for(i = 1; i <= number; i++)
		{
			if( number % i == 0 )
			{
				// printf("%d ", i);
				count = count + 1;
			}
		}

		printf("\n");

		// printf("COUNT THE NUMBER OF DIVISORS = %d\n", count);


		if(count == 2)
		{
			printf("%d is prime number....\n", number);
		}
		else
		{
			printf("%d is not prime number....\n", number);
		}




		return 0;
	}
