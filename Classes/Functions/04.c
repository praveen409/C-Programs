




	// Local Variables

	// Scope : Within the block where it is declared.


	#include<stdio.h>


	int main()
	{
		int number = 100;


		printf("Number = %d\n", number);
	
			{
				int n = 200, number = 300;
				printf("Number => %d\n", number);
				printf("N => %d\n", n);
			}

		printf("Number = %d\n", number);
		//printf("N => %d\n", n);
		
		return 0;
	}	

