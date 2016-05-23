





	#include<stdio.h>




	void printSeries();


	int main()
	{

		printf("Printing 1 to 10 using a function\n");

		printSeries();

		printSeries();

		printSeries();


		return 0;
	}


	void printSeries()
	{
		int i;


		for(i = 1; i <= 10; i++)
		{
			printf("%d ", i);
		}
		
		printf("\n");
	}
