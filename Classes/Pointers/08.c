




	#include<stdio.h>

	int main()
	{
		int a[] = {11,22,33};

		int *ptr;

		ptr = a;


		printf("%d\n", a[1]);

		printf("%d\n", *(a+1));

		printf("%d\n", *(1+a));

		printf("%d\n", 1[a]);








		printf("%d\n", *(ptr+1));

		printf("%d\n", ptr[1]);

		printf("%d\n", *(1 + ptr));

		printf("%d\n", 1[ptr]);

		return 0;
	}
