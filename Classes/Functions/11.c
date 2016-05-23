





	#include<stdio.h>




	void printEvenSeries(int);


	int main()
	{

		printf("Printing 1 to 10 using a function\n");

		printEvenSeries(10);

		printEvenSeries(25);

		printEvenSeries(50);


		return 0;
	}






	void printEvenSeries(int n)
	{
		int i;


		for(i = 1; i <= n; i++)
		{
		
			if(i % 2 == 0)
			{
				printf("%d ", i);
			}

		}
		
		printf("\n");
	}
