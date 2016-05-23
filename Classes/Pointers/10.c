





	// Generic Pointer / void pointer

	//	A pointer that can store the address of any kind of datatype.

	#include<stdio.h>

	int main()
	{
		int x = 10;
		double y = 3.14;
		char z = 'a';	

		
		void *ptr;


		ptr = &x;
		printf("X : %d\n", *(int *)ptr);
		


		ptr = &y;
		printf("Y : %lf\n",*(double *)ptr);



		ptr = &z;
		printf("Z : %c\n", *(char *)ptr);


		return 0;

	}


