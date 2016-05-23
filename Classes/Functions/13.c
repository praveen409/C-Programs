P







	#include<stdio.h>

	


	int isPrime(int number)
	{

		int i, count = 0;


		for(i = 1; i <= number; i++)
		{
			if(number  % i == 0)
			{
				count++;
			}
		}

		
		if(count == 2)
			return 1;
		else
			return 0;

	}


	

	int main()	
	{	
		
		int number;

		printf("Enter the number : ");
		scanf("%d", &number);


		if(isPrime(number))
		{
			printf("It is a prime number...\n");
		}
		else
		{
			printf("It is not a prime number...\n");
		}	

	




		return 0;
	}
