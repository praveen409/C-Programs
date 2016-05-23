






	// A pointer is a variable that contains the address of an object.



	#include<stdio.h>




	int main()
	{
		int a = 25;
		int *ptr;


		ptr = &a;


		printf("Address of A : %p\n", ptr);

		printf("Value of   A : %d\n", *ptr);

		printf("Value of   A : %d\n", ptr[0]);

		return 0;
	}
