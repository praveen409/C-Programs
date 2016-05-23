







	#include<stdio.h>

	int main()
	{
		int a[5] = {12, 23, 34, 45, 56};

		int x = 3;

		printf("%d\n", a[0]); // 12

		printf("%d\n", a[3]); // 45

		printf("%d\n", a[0] * a[0]); // 144

		a[1] = a[4];
		
		printf("%d\n", a[1]); // 56

		printf("%d\n", a[x]); // 45

		printf("%d\n", ++a[x]); // 46

		printf("%d\n", --a[x-1]); // 33


		return 0;
	}



