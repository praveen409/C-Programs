




	#include<stdio.h>

	int main()
	{
		int a=10, b=20, c;
		int *ptr1, *ptr2, *ptr3;

		ptr1 = &a;
		ptr2 = &b;
		ptr3 = &c;


		*ptr3 =	*ptr1 + *ptr2;	



		printf("Addition = %d\n", c);
	

		return 0;
	}
