









	#include<stdio.h>

	int main()	
	{
		int a[] = {10, 20, 30};

		int *ptr = a;

		printf("%d\n", *(ptr+0) );

		printf("%d\n", *ptr);

		return 0;
	}

	
