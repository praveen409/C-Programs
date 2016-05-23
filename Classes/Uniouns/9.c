




	#include<stdio.h>

	struct test1
	{
		int a;
		int b;
	};

	union test2
	{
		int a;
		int b;
		int c;
		int d;
	};


	


	int main()
	{	
		printf("Size of structure test1 : %ld\n", sizeof(struct test1));
		printf("Size of union     test2	: %ld\n", sizeof(union test2));


		return 0;
	}
