

	#include<stdio.h>


	fun(double x)
	{
		return x;
	}

	int main()
	{
		double d1 = 23.3456, d2;

		d2 = fun(d1);


		printf("D1 : %lf\n", d1);
		printf("D2 : %lf\n", d2);

		return 0;
	}
