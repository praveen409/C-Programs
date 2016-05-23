











	#include<stdio.h>

	

	void fun(int number)
	{

		printf("Number in fun : %d\n", number);

		if(number != 0)
		{
			fun(--number);
		}

		printf("Number : %d\n", number);
	}



	int main()
	{	

		int number = 10;



		fun(number);
	


		return 0;
	}
