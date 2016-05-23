






	#include<stdio.h>


	int main()
	{
		int a = 10, b = 20;
		int *const ptr = &a;


		

		printf("A : %d\n", *ptr);


		ptr = &b;

		printf("B : %d\n", *ptr);


		return 0;
	}
