





	#include<stdio.h>


	struct test1
	{
		int a;
		char d;
		int b;
		char c;
		
	};


	struct test2
	{
		char a;
		int b;
	}__attribute__((__packed__));


	struct test3
	{
		char a;
		char b;
		char c;
		char d;
		int e;
		char f;

	}__attribute__((__packed__));

	int main()
	{
		printf("Size of test1 : %ld\n", sizeof(struct test1));

		printf("Size of test2 : %ld\n", sizeof(struct test2));
		


		printf("Size of test3 : %ld\n", sizeof(struct test3));
		
		return 0;
	}
