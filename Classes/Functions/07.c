





	#include<stdio.h>


	int n = 100;  // Global Variable


	void fun1()
	{
		n = 200;
		printf("N in Fun1 = %d\n", n);	
	}


	void fun2()
	{
		int n = 500;
		printf("N in Fun2 = %d\n", n);	
	}
	
	void fun3()
	{
		extern int n;
		n = 1000;
		printf("N in Fun3 = %d\n", n);	
	}

	
	int main()
	{
		
		printf("N = %d\n", n);	
		
		fun1();

		printf("N = %d\n", n);	

		fun2();

		printf("N = %d\n", n);	
		
		fun3();
		
		printf("N = %d\n", n);	

		return 0;
	}
