






	#include<stdio.h>



	void fun()
	{
		int number = 10;

		printf("Number in fun   : %d\n", number);

		number ++;

		printf("Number in fun   : %d\n", number);

	}




	int main()
	{
		int number = 5;


		printf("Number in main : %d\n", number);

		fun();

		printf("Number in main : %d\n", number);

		return 0;
	}
