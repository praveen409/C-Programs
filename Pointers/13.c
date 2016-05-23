





	// const Pointer



	#include<stdio.h>

	int main()	
	{
		int x = 56;

		const int *ptr;


		ptr = &x;




		printf("X : %d\n", x);
		
		*ptr = 23;

		printf("X : %d\n", x);


		return 0;
	}



