




	#include<stdio.h>

	int main()
	{
		int x = 56;

		const int *const ptr = &x;



		printf("X : %d\n", *ptr);

		return 0;
	}	
