




	// Life of auto variables : Within the block where it is declared


	#include<stdio.h>


	void fun()
	{
		auto int number = 1;
		
		printf("Number = %d\n", number);

		number = number + 1;
	}


	int main()
	{

		fun();

		fun();

		fun();

		fun();

		fun();


		return 0;
	}		
