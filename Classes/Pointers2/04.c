







	#include<stdio.h>
	#include "array.h"



	int main()
	{
		int a[] = {33,77,22,99,12};
		int m1, m2;

		getMaxMin(a, 5, &m1, &m2);
		
		printf("Maximum Element : %d\n", m1);
		printf("Minimum Element : %d\n", m2);
		return 0;
	}
