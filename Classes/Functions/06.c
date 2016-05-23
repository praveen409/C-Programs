




	/* Life of static variables : value is maintained between different 
		function call..
	*/

	#include<stdio.h>


	void fun()
	{
		static int number;
		
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
