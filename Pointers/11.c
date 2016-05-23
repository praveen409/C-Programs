




	// Wild Pointer

	#include<stdio.h>


	int main()
	{
		int x;
		int *ptr; // Uninitialized Pointer


		printf("X : %d\n", x);

		*ptr = 45; // harmful

		printf("*ptr = %d\n", *ptr); 

		return 0;
	}
