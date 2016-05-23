


	#include<stdio.h>

	int fun()
	{
		printf("Function is running....\n");
		printf("I don't want to return any value..\n");
	}

	int main()
	{
		int n;

		n = fun();

		printf("Return Value from the function : %d\n", n);

		return 0;
	}
